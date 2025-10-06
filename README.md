# TCP-IP_Protocol_Stack

Approximately 10,000 + lines of code build a small and highly portable TCP/IP protocol stack.

Protocol support:

· Ethernet Protocol: Supports the sending and receiving of Ethernet data packets and the processing of data packets.

· Address Resolution Protocol (ARP) : Fully supports the query and response process of ARP; Support the sending of unrewarded (free) ARP packets; Using a configurable size of ARP cache can improve query efficiency. Update the ARP cache periodically at fixed periods to automatically clean up invalid cache entries. Cache updates can be made using the input ARP packets and IP packets to reduce network traffic.

·IPv4 protocol: Supports the transmission and reception of basic IP data packets and the calculation of checksums; Supports fragmentation and reassembly of IP data packets, as well as reassembly timeout handling: Built-in routing table, enabling Internet access through routers.

·ICMPv4 protocol: Supports responding to input echo requests; Provide a message indicating that the destination port is unreachable to notify other machines of access errors.

·UDP Protocol: Basic UDP input/output processing, correctly delivering input packets to applications.

·TCP Protocol: Basic 3-way handshake and 4-way handshake; Data stream transmission and sliding window processing; Support TCP state machine switching; Data transmission based on timer timeout retransmission.

· Application Layer Protocol: Domain Name Resolution Protocol (DNS) : Supports domain name resolution and conversion to IP addresses; Support adding multiple DNS servers; Cache DNS query results and automatically delete them upon timeout. Allow multiple tasks to query simultaneously. Network Time Service NTP (to be added) Simple File Transfer Protocol TFTP (to be added) Hypertext Transfer Protocol HTTP (to be added).
