Pointer Records. 
Reverse DNS Queries.

Although the most critical function of [[DNS]] is to provide mappings from names to [[IP]] addresses, there are many circumstances where the reverse mapping is required. For example, a server receiving an incoming [[TCP.IP|TCP/IP]] connection request is able to ascertain the source IP address of the connection from the incoming IP [[Datagram|datagram]], but the name(s) corresponding to the address are not carried in the connection itself; such name(s) must be looked up in some other way. Fortunately, a clever use of the DNS can provide this capability. The PTR RR type is used in response to reverse DNS queries, which are typically necessary when converting an IP address to a name. This uses the special `in-addr.arpa` (`ip6.arpa` for IPv6) domain, in a special way. Consider an IPv4 address such as `128.32.112.208`. In the classful address structure, this address is taken from the `128.32` class B address space. To determine the name corresponding to this address, the address is first reversed, and then the special domain is added. In this example, a query for a PTR record using the name
```
208.112.32.128.in-addr.arpa.
```
would be used. In effect, this is a query for the “host” `208` in the “domain” `112.32.128.in-addr.arpa`.
