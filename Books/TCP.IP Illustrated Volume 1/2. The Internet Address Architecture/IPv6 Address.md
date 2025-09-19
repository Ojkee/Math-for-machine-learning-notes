[[IP]] version 4 with address size of 128-bits and format `xxxx:xxxx:xxxx:xxxx:xxxx:xxxx`.

Components:
- Network part, always 64 bits.
- Host part, also 64 bits.

### Simplifications that have been standardized
1. Leading zeros of a block need not be written. 
2. Blocks of all zeros can be omitted and replaced by the notation `::`. For example, the IPv6 address `0:0:0:0:0:0:0:1` can be written more compactly as `::1`. Similarly, the address `2001:0db8:0:0:0:0:0:2` can be written more compactly as `2001:db8::2`. To avoid ambiguities, the `::` notation may be used only once in an IPv6 address.
3. Embedded [[IPv4 Address]] addresses represented in the IPv6 format can use a form of hybrid notation in which the block immediately preceding the IPv4 portion of the address has the value `ffff` and the remaining part of the address is formatted using dotted-quad. For example, the IPv6 address `::ffff:10.0.0.1` represents the IPv4 address `10.0.0.1`. This is called an IPv4-mapped IPv6 address.
4. A conventional notation is adopted in which the low-order 32 bits of the IPv6 address can be written using dotted-quad notation. The IPv6 address `::0102:f001` is therefore equivalent to the address `::1.2.240.1`. This is called an IPv4-compatible IPv6 address. Note that IPv4-compatible addresses are not the same as IPv4-mapped addresses; they are compatible only in the sense that they can be written down or manipulated by software in a way similar to IPv4 addresses. This type of addressing was originally required for transition plans between IPv4 and IPv6 but is now no longer required.
