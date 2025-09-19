![[Pasted image 20250919151405.png]]

### Header
- Internet Header Length (min 20 bytes, max 60 bytes with options) 
- Version Field (4 bits) = 4
- Type of Service (1 byte) redefined into:
	- Differentiated Services Field (6 bit)
	- Explicit Congestion Notification (2 bit)
	and describes the priority of package
- Total Length describes total length of particular [[Fragmenting|fragment]] in bytes
- Identification helps identify each [[Datagram]] sent by ans [[IPv4 Address|IPv4]] Host to ensure that the fragments of one datagram are not confused with those of another. Each datagram has counter incremented by 1 for each sent
- Flags ans Fragment Offset
- Time-to-Live sets upper limit on the number of routers through which a datagram can pass, when counter reaches 0, the datagram is thrown away, and the sender is notified with an ICPM message. 
- Protocol field contains a number indicating the type of data found in the payload portion of the datagram (17 for UDP and 6 for [[TCP.IP|TCP]]), this provides [[Demultiplexing]] feature so that the [[IP]] protocol can be used to carry payload of more than one protocol type
- [[Checksum]]
- Source and Destination IP addresses