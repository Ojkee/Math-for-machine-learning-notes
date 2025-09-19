Packet-filtering firewalls act as Internet routers and filter (drop) some traffic. They can generally be configured to discard or forward packets whose headers meet (or fail to meet) certain criteria, called filters.

The most popular filters involve undesired IP addresses or options, types of ICMP mes- sages, and various UDP or TCP services, based on the port numbers contained in each packet.

A typical packet-filtering firewall is shown in Figure 7-1. Here, the firewall is an Internet router with three network interfaces: an “inside,” an “outside,” and a third “DMZ” interface. The DMZ subnet provides access to an extranet or DMZ where servers are deployed for Internet users to access.
![[Pasted image 20250919175839.png]]

