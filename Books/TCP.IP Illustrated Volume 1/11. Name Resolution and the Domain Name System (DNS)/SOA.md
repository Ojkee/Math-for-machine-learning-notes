Start of Authority.

These records provide authoritative links between portions of the [[DNS]] name space and the servers that provide the zone information allowing various queries to be performed for addresses and other information. 

The SOA RR is used to identify the name of the host providing the official permanent database, the responsible party’s e-mail address (where `.` is used instead of `@`), zone update parameters, and the default TTL. The default TTL is applied to RRs in the zone that are not otherwise assigned an explicit per-RR TTL.