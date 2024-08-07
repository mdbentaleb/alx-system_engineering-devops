![1](https://github.com/user-attachments/assets/1e3719d1-a7d8-4c4a-80c1-8cc9e07af7b8)

This question is a classic and still widely used interview question for many types of software engineering position. It is used to assess a candidate’s general knowledge of how the web stack works on top of the internet. One important guideline to begin answering this question is that you should ask your interviewer whether they would like you to focus in on one specific area of the workflow. For a front-end position they may want you to talk at length about how the DOM is rendering. For an SRE position they may want you to go into the load balancing mechanism.

This question is a good test of whether you understand DNS. Many software engineering candidates struggle with this concept, so if you do well on this question, you are already way ahead of the curve. If you take this project seriously and write an excellent article, it may be something that will grab the attention of future employers.

Requirements, your post must cover:

DNS request
TCP/IP
Firewall
HTTPS/SSL
Load-balancer
Web server
Application server
Database
Let’s get right into answering this question on both ends:

Have you ever pondered on this question? Whether tech inclined or not it is necessary to have a basic knowledge on the mechanics of data transportation from the “Internet” to our personal computers

![ou0ydu2n](https://github.com/user-attachments/assets/5c54d864-7425-4a94-98dc-9d9f14e0b961)


When a user enters a URL and clicks Enter, the browser must first determine the IP address of the server that is hosting the webpage. This is achieved by using a DNS query, also known as a DNS request, in which the user’s computer (a DNS client) requests a DNS server’s response with the IP address for the domain name (a computer server that contains a database of public IP addresses and their associated hostnames.)


![tvd3n9ib](https://github.com/user-attachments/assets/f793a645-5bdc-445b-a5f8-17e4f95623d4)

When an IP address is still unknown, it first checks the browser and/or OS cache before moving on to the Resolver server, which is often your Internet service provider. All resolvers are required to know where to find the root servers, which in turn know where to find the .COM TLD (Top-Level Domain) server. In the event that the resolver is unable to discover https://www.google.com, the root server informs it of where to find the .COM TLD server. In order to avoid having to query the root server again and making another journey, the resolver first caches this information. When contacted by the .COM TLD server, the server, if it is unaware of the IP address, offers the authoritative name servers for google.com. Once more, the resolver saves this fresh data. The final authority in charge of processing requests of this kind is the authoritative name server. After obtaining the IP address and saving it, the resolver returns home to provide the OS with this data.


![zul51ohr](https://github.com/user-attachments/assets/7a8f5c97-f610-4d43-bce0-ac485891435b)


DNS Request

TCP/IP

The browser sends a request to the website’s server to start a conversation with it. However, no communication can be accomplished without having a shared language or message format, hence TCP/IP is employed as a connecting technique.

TCP/IP is a set of guidelines for internet-connected computer systems that are conceived in layers. The layers are listed below:

The first layer, the Application layer, is where applications like your browser communicate directly. This layer includes protocols such as HTTP (for viewing websites) and SMTP (for checking email). The Application layer receives data from the browser and sends it to the second layer through a port.
TCP and a second scheme called UDP are both present in the Transport Layer, which is the second layer. In order for TCP to understand where the data is coming from, each application layer protocol utilizes a separate port to interact with this layer. Once the data has been received by TCP, it divides it into smaller units known as segments, commonly referred to as packets, so that each one may travel the shortest distance possible. TCP appends a header to each segment that contains instructions on what order to reassemble the segments into as well as error checking information so that the computer can determine whether the segments arrived without any problems in order to reunite them properly when they reach their destination. The segments are then put onto the third layer after this is complete.
The third layer, the Internet Layer, receives the segments and appends the origin and destination IP addresses to each segment so that regardless of the path the segments may travel, they are aware of their origin and destination. After that, the segments are sent to the top layer.
The Network Access Layer. Data transmission between two devices connected to the same network is handled by it. It specifies how the data should be physically sent across the network.
Typical TCP/IP protocols comprise;

1. A web server and a web browser communicate via the Hypertext Transfer Protocol (HTTP).
2. HTTP Secure manages secure communication between a web server and a web browser (an http with an ’s’ — https, like in our URL).
3. File Transfer Protocol controls computer-to-computer file transfer.

At this point, your computer essentially just says, “Hey, I need the content of https://www.google.com," using the “https” language, and the server on the IP answers with the web pages based on the agreed-upon language.

FIREWALLS

Network security tools called firewalls keep an eye on both incoming and outgoing network traffic before deciding whether to allow or restrict a particular type of communication in accordance with predefined criteria. The conversation and any relevant packets exchanged with https://www.google.com are tracked until the connection is stopped with a firewall configured on your machine. As a result, the danger of malware assaults is significantly decreased, which is particularly beneficial for enabling safe communication over the internet.


![m0wzf7sr](https://github.com/user-attachments/assets/160e9919-9bef-41a1-8bf2-c1dbd1bd8179)

Firewall

HTTPS/SSL

Earlier, it was said that https handles encrypted communication between a web server and a web browser. Typically, SSL is responsible for the security provided by https (Secure Sockets Layer). A communication technology called SSL makes it easier to establish trusted connections and send encrypted data and packets between networked devices.

So, before any more data is transferred, an SSL handshake process is performed at the beginning of connection between your computer and https://www.google.com.

![f5yg65xu](https://github.com/user-attachments/assets/a7b8e014-4906-4ce0-8efd-96911956fa29)

The SLS Handshake Process

LOAD-BALANCER

Google searches are something we all do every single day. If there is only one server for https://www.google.com, your browser may experience delays in displaying the site’s content, assuming it even reaches the site at all. This is because there are often millions of people all trying to access the same page at the same time. Companies like Google provide multiple high-capacity servers, each with a unique IP address, to handle the traffic to https://www.google.com. Even when there are several servers available, traffic from various parts of the world still needs to be balanced across them. This is where a load balancer comes in.

Load-balancers, in this context, are programs or pieces of hardware that route requests for servers from clients to many servers in the same network. Load balancing is the practice of using multiple scheduling algorithms in concert inside a single piece of software. Load balancers, on the hardware side, are sometimes referred to as specialized routers or switches and are placed between the servers and the clients.

![s49gc8sp](https://github.com/user-attachments/assets/165432c8-60ed-413e-ba27-7149056464d2)

Load Balancer

WEB SERVER & APPLICATION SERVER

A web server is a computer system that processes requests from users on the World Wide Web and sends back data using the Hypertext Transfer Protocol (HTTP) and other protocols. Its primary responsibility is to show website content by storing, processing, and delivering web pages to visitors.

In contrast to a web server, which was designed to primarily serve static material, an application server is capable of serving dynamic content, performing business logic for enterprise applications, and incorporating a number of different protocols for client response.

For example, when you type in “https://www.google.com" in your browser, the server will respond and send the requested page to your computer.

DATABASE

Databases store data in a structured style that facilitates quick searches and regular maintenance. Any kind of information can be saved, managed, and retrieved with the help of a database. This information has been gathered in a systematic fashion.

The Database Management system makes it possible to manage data by storing information about users, updating information about location and time zone, managing session data, and so on. It enables the maintenance of well-organized data within a structure that is both aesthetically pleasing and functionally sound. In order to retrieve data from the database system, store data, modify data, or remove data, the application server communicates with the database server via the database system. In line with the request, given that we are in the process of accessing the Google homepage, the database will be queried for location information taking our IP address into consideration. As a result, an HTML page that is more tailored to our needs will be prepared by the application server and delivered to us.

CONCLUSION
These are merely some broad strokes of how the web operates, but I hope that this has been of some use to individuals who are curious about the following: “What happens when I type https://www.google.com in the browser and push enter?” Thanks :)
