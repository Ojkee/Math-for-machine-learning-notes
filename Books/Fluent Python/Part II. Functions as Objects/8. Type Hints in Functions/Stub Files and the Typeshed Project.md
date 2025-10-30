As of Python 3.10, the standard library has no annotations, but Mypy, PyCharm, etc. can find the necessary type hints in the Typeshed project, in the form of stub files: special source files with a `.pyi` extension that have annotated function and method signatures, without the implementation—much like header files in C. 

The signature for `math.fsum` is in `/stdlib/2and3/math.pyi`.

