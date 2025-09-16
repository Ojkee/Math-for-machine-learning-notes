One-to-many communication method where a single packet is sent to a special group address and delivered to multiple interested hosts (subscribers). Instead of sending separate unicast packets to each receiver or broadcasting to all devices, multicast efficiently delivers data only to members of the group.

- Address range (IPv4): 224.0.0.0 – 239.255.255.255 (Class D).
- Delivery: Only hosts that explicitly join the multicast group receive the traffic.
- Efficiency: Saves bandwidth compared to multiple [[Unicast|unicasts]] and avoids unnecessary load compared to broadcast.
- Examples of use: Streaming video, real-time data feeds, online conferencing
