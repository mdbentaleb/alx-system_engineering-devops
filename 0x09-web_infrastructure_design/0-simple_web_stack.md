![web infrastructure](https://github.com/mdbentaleb/alx-system_engineering-devops/assets/132714803/384e188f-7703-47b0-8914-39d25578136c)


## Description

The previous configuration is a simple web infrastructure to host a Web site available at `www.foobar.com`.
This web setup has no firewalls and SSL certificates to protect the network of the server.
All system resources, like CPU, RAM, and SSD, are shared with all components of the application server and database server.


## Specifics About This Infrastructure

- **What is a Server**:
<br/>&nbsp;A server may be a hardware or software computer system which, at the behest of client computers, avails services to them.
<br/>&nbsp;More often than not, data centers house the servers, which may either be physical or virtual machines.
<br/>&nbsp;They work on an operating system.

- **The Role of the Domain Name**:
<br/>A domain name acts as a readable alias to the `IP address`, which is a long numerical address.
<br/>For example, the domain name `www.wikipedia.org` serves the purpose of being more readable than its numeric IP address, `91.198.174.192`.
<br/>This mapping is maintained through the Domain Name System.

- **The Role of the DNS**:
<br/>the DNS translates domain names into IP addresses,allowing browsers to find the server hosting the website a user wants.

- **The Type of DNS Record for www in `www.foobar.com`**:
<br/>The DNS record type for `www.foobar.com` is an A record.
<br/>The A record maps a domain name to its corresponding `IPv4 address`.
<br/>You may check this with `dig www.foobar.com`.
<br/>Although results may vary, this design uses an A record.

- **The Role of the Web Server**:
<br/>A web server is either hardware or software that responds to client requests, usually in the `HTTP` or `HTTPS` protocol, and delivers the requested resource or an error message.
<br/>Primarily, it serves static web pages.

- **The Role of the Application Server**:
<br/>An application server is a server on which the installation, operation, and hosting of applications and associated services for the user, IT department, or organization take place.
<br/>It processes dynamic content and facilitates the delivery of high-end consumer or business applications.

- **The Role of the Database**:
<br/>A database is a system that stores an organized collection of data to easily retrieve, manipulate, and update it.
<br/>It simply stores application data.

- **Client-Server Communication**:
<br/>The server communicates with the client computer—that is, the user's computer requesting the site—using the TCP/IP protocol suite over the internet.


## Issues With This Infrastructure

- **Single Point of Failure (SPOF)**:
<br/>This server setup is a single point of failure due to the lack of redundancy.
<br/>If the server fails, the entire website becomes unavailable.

- **Multiple Single Points of Failure**:
<br/>Several components in this infrastructure represent single points of failure.
<br/>For instance, if the MySQL database server goes down, the entire site would be inaccessible.

- **Downtime During Code Deployment**:
<br/>Deploying new code requires restarting the web server, hence temporary website downtime

- **Maintenance Downtime**:
<br/>There is a need for maintenance checks that require components to be taken offline or the server shut down.
<br/>Given that there is only one server, the website will have downtime during the time of maintenance activities.

- **Scalability Issues**:
<br/>This infrastructure cannot handle high levels of incoming traffic.
<br/>It struggles to scale beyond the capability of a server, as resource exhaustion or slow performance may occur when the server receives more than a reasonable quantity of requests.
