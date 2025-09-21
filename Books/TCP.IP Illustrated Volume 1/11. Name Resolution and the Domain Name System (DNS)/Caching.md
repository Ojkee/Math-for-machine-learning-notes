Most name servers (except some of the root and [[TLD]] servers) also cache zone information they learn, up to a time limit called the time to live (TTL). 

They use this cached information to answer queries.

Doing so can greatly decrease the amount of [[DNS]] message traffic that would otherwise be carried on the Internet.

When answering a query, a server indicates whether the information it is returning has been derived from its cache or from its authoritative copy of the zone.

When cached information is returned, it is common for a server to also include the domain names of the name servers that can be contacted to retrieve authoritative information about the corresponding zone.

Each DNS record has its own TTL that controls how long it can be cached. These values are set and altered by the zone administrator when necessary. The TTL dictates how long a mapping can be cached anywhere within DNS, so if a zone changes, there still may exist cached data within the network, potentially leading to incorrect DNS resolution behavior until expiry of the TTL. For this reason, some zone administrators, anticipating a change to the zone contents, first reduce the TTL before implementing the change. Doing so reduces the window for incorrect cached data to be present in the network.

[[Negative caching]] may also appear.

In Windows and more recent systems (e.g., Linux), the client can maintain a cache, and it is made available to all applications running on the same system. In Windows, this happens by default, and in Linux, it is a service that can be enabled or disabled.

In Linux and other systems that support it, the Name Service Caching Daemon (NSCD) provides a client-side caching capability. It is controlled by the `/etc/nscd.conf` file that can indicate which types of resolutions (for DNS and some other services) are cached, along with some cache parameters such as TTL settings. In addition, the file `/etc/nsswitch.conf` controls how name resolution for applications takes place. Among other things, it can control whether local files, the DNS protocol, and/or NSCD is employed for mappings.
