A [[DNS]] server can contain information for more than one [[Zones|zone]]. At any hierarchical change point in a domain name (i.e., wherever a period appears), a different zone and containing server may be accessed to provide information for the name.

Example:
Zone admin decide whether some part of domain could be a different zone.
Lets say from `barkeley.edu` he could separate subzone `cs.berkeley.edu` and delegate that for CS departament.
```
cs.berkeley.edu.   NS   ns1.cs.berkeley.edu.
```
`ns1.cs.kerkeley.edu` now are responsible for `cs.berkeley.edu`.
