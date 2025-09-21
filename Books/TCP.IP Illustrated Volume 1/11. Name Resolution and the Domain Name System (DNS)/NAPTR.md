Name Authority Pointer. 

It is used when [[DNS]] supports a Dynamic Delegation Discovery System (DDDS).

A DDDS is a general, abstract algorithm for applying dynamically retrieved string transformation rules to strings provided by applications and using the results, most often, for locating resources. Each DDDS application customizes the operation of the general DDDS rules for its particular use case. A DDDS includes a rules database and a set of algorithms for forming strings that are used with the database to produce output strings. DNS is one such database, and with it the NAPTR resource record type is used to hold the transformation rules. One such DDDS application has been defined for use with DNS to handle multinational telephone numbers and convert them to a standard Uniform Resource Identifier (URI) format using ENUM.

In a DDDS, an algorithm directs how an application-unique string (AUS) is processed by rules contained in a database. The result can be either a terminal string (complete output) or another (nonterminal) string used to retrieve another rule that is applied to the AUS. In all, the collection forms a powerful string rewriting system that can be used to encode nearly anything that has a sufficiently regular syntax. 

Structure:
```
name TTL class NAPTR order preference flags service regexp replacement
```

![[Pasted image 20250921181428.png]]