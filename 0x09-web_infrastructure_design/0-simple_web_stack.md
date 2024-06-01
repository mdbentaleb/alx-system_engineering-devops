## Description

The previous configuration is a simple web infrastructure to host a Web site available at `www.foobar.com`.
This web setup has no firewalls and SSL certificates to protect the network of the server.
All system resources, like CPU, RAM, and SSD, are shared with all components of the application server and database server.


## Specifics About This Infrastructure

+ What is a Server:
<br/>   A server may be a hardware or software computer system which, at the behest of client computers, avails services to them.
<br/>   More often than not, data centers house the servers, which may either be physical or virtual machines.
<br/>   They work on an operating system.

+ The Role of the Domain Name:
<br/>A domain name acts as a readable alias to the `IP address`, which is a long numerical address.
<br/>For example, the domain name `www.wikipedia.org` serves the purpose of being more readable than its numeric IP address, `91.198.174.192`.
<br/>This mapping is maintained through the Domain Name System.

+  The Role of the DNS:
<br/>the DNS translates domain names into IP addresses,allowing browsers to find the server hosting the website a user wants.

- The Type of DNS Record for www in `www.foobar.com`:
<br/>The DNS record type for `www.foobar.com` is an A record.
<br/>The A record maps a domain name to its corresponding `IPv4 address`.
<br/>You may check this with `dig www.foobar.com`.
<br/>Although results may vary, this design uses an A record.

- The Role of the Web Server
<br/>A web server is either hardware or software that responds to client requests, usually in the `HTTP` or `HTTPS` protocol, and delivers the requested resource or an error message.
<br/>Primarily, it serves static web pages.

- The Role of the Application Server
<br/>An application server is a server on which the installation, operation, and hosting of applications and associated services for the user, IT department, or organization take place.
<br/>It processes dynamic content and facilitates the delivery of high-end consumer or business applications.

