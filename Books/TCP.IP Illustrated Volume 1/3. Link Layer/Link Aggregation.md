Mechanism that connects physical interfaces into one logical.

Linux has the capability to implement link aggregation (bonding) across different types of devices using the following commands:
```bash
modprobe bonding
ifconfig bond0 10.0.0.111 netmast 255.255.255.128
ifenslave bond0 eth0 wlan0
```