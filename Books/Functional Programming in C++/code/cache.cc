#include <cstdint>
#include <iostream>
#include <map>
#include <mutex>
#include <tuple>
#include <type_traits>
#include <utility>

class dummy {};

template <class Sig, class F>
class memoize_helper;

template <class Result, class... Args, class F>
class memoize_helper<Result(Args...), F> {
 public:
  template <typename Function>
  memoize_helper(Function&& f, dummy) : f(f){};

  memoize_helper(const memoize_helper& other) : f(other.f) {};

  template <class... InnerArgs>
  Result operator()(InnerArgs&&... args) const {
    std::unique_lock<std::recursive_mutex> lock{m_cach_mutex};
    const auto args_tuple = std::make_tuple(args...);
    const auto cached = m_cache.find(args_tuple);
    if (cached != m_cache.cend()) {
      return cached->second;
    }
    auto&& result = f(*this, std::forward<InnerArgs>(args)...);
    m_cache[args_tuple] = result;
    return result;
  }

 private:
  using function_t = F;
  using args_tuple_t = std::tuple<std::decay_t<Args>...>;

  function_t f;
  mutable std::map<args_tuple_t, Result> m_cache;
  mutable std::recursive_mutex m_cach_mutex;
};

template <class Sig, class F>
memoize_helper<Sig, std::decay_t<F>> make_memoized_r(F&& f) {
  return {std::forward<F>(f), dummy()};
}

auto main() -> int {
  auto fibmemo = make_memoized_r<uint32_t(uint32_t)>([](auto& fib, uint32_t n) {
    return n == 0 ? 0 : n == 1 ? 1 : fib(n - 1) + fib(n - 2);
  });

  std::cout << fibmemo(25) << "\n";
  std::cout << fibmemo(25) << "\n";

  return 0;
}
