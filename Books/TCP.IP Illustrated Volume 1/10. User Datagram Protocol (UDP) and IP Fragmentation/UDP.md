UDP is a simple, datagram-oriented, transport-layer protocol that preserves message boundaries. It does not provide error correction, sequencing, duplicate elimination, flow control, or congestion control. It can provide error detection, and it includes the first true [[End-to-End Argument|end-to-end]] [[Checksum|checksum]] at the transport layer that we have encountered. 

This protocol provides minimal functionality itself, so applications using it have a great deal of control over how packets are sent and processed.

Applications wishing to ensure that their data is reliably delivered or sequenced must implement these protections themselves.

Generally, each UDP output operation requested by an application produces exactly one UDP datagram, which causes one IP datagram to be sent. This is in contrast to a stream-oriented protocol such as [[TCP.IP|TCP]], where the amount of data written by an application may have little relationship to what actually gets sent in a single [[IP]] [[Datagram|datagram]] or what is consumed at the receiver.