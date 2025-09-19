Classless Inter-Domain Routing.

A method for allocating IP addresses and routing, introduced in 1993. Replaced the old classful system (Class A/B/C with fixed masks). Uses the format address/prefix length (e.g., 192.168.0.0/23) instead of fixed classes.

Benefits:
- Flexible address allocation (networks can be any size, not just /8, /16, /24).
- Route aggregation (multiple adjacent networks can be summarized into one route).
- Instead of advertising 192.168.0.0/24 and 192.168.1.0/24 separately, a router can advertise a single 192.168.0.0/23.

Memory trick: the system that enables efficient IP addressing and aggregation