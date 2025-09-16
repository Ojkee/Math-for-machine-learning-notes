A block of IP addresses described in [[CIDR]] notation: base address + prefix length. Prefix length (`/n`) tells how many bits are fixed for the network part. 

192.168.0.0/23 → covers addresses from 192.168.0.0 to 192.168.1.255. 
- /24 = 256 addresses
- /23 = 512 addresses
- /20 = 4096 addresses.

Role:
- Unit of IP address allocation (given to ISPs or users).
- Unit of routing (routers exchange prefixes in routing tables).

Memory trick: a specific chunk of addresses that exists thanks to CIDR