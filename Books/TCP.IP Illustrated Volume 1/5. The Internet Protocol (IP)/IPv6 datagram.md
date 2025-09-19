![[Pasted image 20250919151451.png]]

### Header
- 40 bytes, no options
- Version Field (4 bits) - 6
- Type of Service (1 byte) redefined into:
	- Differentiated Services Field (6 bit )
	- Explicit Congestion Notification (2 bit)
- Payload Length describes length without header
- Next Header generalizes the [[IPv4 datagram]] 'Protocol' field, can have any value that 'Protocol' field or any of the values associated with the IPv6 extension headers
- Source and Destination IP addresses

### Extension Headers
![[Pasted image 20250919170150.png]]

### Options
- Jumbo Payload
- Tunnel Encapsulation Limit
- Router Alert
- Quick-Start
- Common Architecture Label IPv6 Security Option (CALIPSO)
- Nome Address

### Routing Header
![[Pasted image 20250919170334.png]]
![[Pasted image 20250919170348.png]]

### Fragment Header
![[Pasted image 20250919170748.png]]
![[Pasted image 20250919170805.png]]
