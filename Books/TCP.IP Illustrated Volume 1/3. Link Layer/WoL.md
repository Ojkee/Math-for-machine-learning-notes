Wake-on LAN.

Capability that are used to bring the network interface and/or host computer out of a lower-power (sleep) state based on the arrival of certain kinds of packets.

Configuration command 
```bash
ethtool –s eth0 wol umg
```
- any physical-layer (PHY) activity (p)
- unicast frames destined for the station (u)
- multicast frames (m)
- broadcast frames (b)
- ARP frames (a)
- magic packet frames (g), and magic packet frames including a password

This command configures the `eth0` device to signal a wake-up if any of the frames corresponding to the types u, m, g, or b is received.
