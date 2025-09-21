Service Records.

SRV RRs generalize the [[MX]] record format to describe the host, protocols, and port numbers used to contact a particular service.

Structure:
```
_Service._Proto.Name TTL IN SRV Prio Weight Port Target
```