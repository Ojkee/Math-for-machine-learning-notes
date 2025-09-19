Tunneling [[IPv6 Address|IPv6]] through [[IPv4 Address|IPv4]] Networks.

Teredo transports IPv6 datagrams in the payload area of [[UDP]]/IPv4 [[Datagram|datagrams]] for systems that have no other IPv6 connectivity options.

Teredo clients are IPv4/IPv6 hosts that implement a Teredo tunneling interface. Such interfaces are assigned special Teredo addresses using the 2001::/32 IPv6 [[Prefix|prefix]] after having successfully engaged in a “qualification” procedure, described in the next paragraph.

Teredo servers, which serve a general purpose similar to STUN servers, are used to help establish direct tunnels of Teredo-encapsulated IPv6 [[Packet|packets]] through [[NAT]]s. Teredo relays serve a purpose similar to TURN servers and consequently may take significant processing resources if used by many clients.

Note that servers must include all of the capabilities of relays, but not vice versa. Using Teredo relays is a “last-resort” option for IPv6 connectivity. Nodes cease to perform Teredo tunneling if they discover that they have any other IPv6 connectivity option.

![[Pasted image 20250919215240.png]]