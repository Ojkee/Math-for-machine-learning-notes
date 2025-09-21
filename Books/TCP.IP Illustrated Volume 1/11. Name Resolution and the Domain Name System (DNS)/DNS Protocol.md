The [[DNS]] protocol consists of two main parts: a `query/response` protocol used for performing queries against the DNS for particular names, and another protocol for name servers to exchange database records ([[Zones|zone]] transfers). It also has a way to notify secondary servers that the zone database has evolved and a zone transfer is necessary (DNS Notify), and a way to dynamically update the zone (dynamic updates). By far, the most typical usage is a simple query/response to look up the [[IPv4 Address|IPv4]] address that corresponds to a domain name.

![[Pasted image 20250921123202.png]]

Step by step:

- A.HOME (home computer) - sends query 'Whats the `example.com` address?'
- GW.HOME (home router/server DNS) - Checks cache and forwards to ISP Network if address is not present
- ISP DNS Server - Larger cache, if address is not present, it forwards it
- Root Name Server - Does not know the address of `example.com`, but gives addresses of gTLDs that are responsible for `.com`
- gTLD Servers - Gives address of authoritative serwer
- A.IANA-SERVERS.NET - responds with address for `example.com`
