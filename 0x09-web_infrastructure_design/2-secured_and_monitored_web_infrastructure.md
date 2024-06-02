# Secured and monitored web infrastructure
![2-secured_and_monitored_web_infrastructure](https://github.com/mdbentaleb/alx-system_engineering-devops/assets/132714803/5b7fbfb9-b40f-4735-b4d4-ce5b4d2617bb)

## Description
This project involves setting up a 3-server web infrastructure that is secure, monitored, and serves encrypted traffic.

### Key Features

1. **Firewall Protection**: Filters network traffic in and out of the servers, protecting against unauthorized access.
2. **HTTPS Encryption**: Ensures that intercepted traffic cannot be read by encrypting data between the client and the server.
3. **Monitoring**: Continuously checks the health and performance of the servers, alerting administrators to issues such as slow performance or failures.

### Monitoring Setup
The monitoring system comprises clients that collect and send data to a central monitoring server. This setup allows for:
- Collection of web server data.
- Triggered alerts if the Queries Per Second (QPS) exceed a set threshold.

### Issues and Considerations

1. **SSL Termination**: Terminating SSL at the load balancer level leaves traffic between the load balancer and the web servers unencrypted, which is a security risk.
2. **Database Redundancy**: Relying on a single MySQL server for write operations creates a single point of failure. If the master server goes down, the application cannot perform write operations.
3. **Resource Contention**: Having servers with all the same components (database, web server, and application server) can lead to resource contention, impacting performance. This configuration also complicates scaling and maintenance.

## Specifics About This Infrastructure

### Firewall
The firewall serves as an intermediary between the internal network and the external world, blocking unwanted and unauthorized traffic to protect the web servers.

### SSL Certificate
SSL certificates encrypt traffic between the web servers and external networks, preventing man-in-the-middle attacks and network sniffing. They ensure privacy, data integrity, and server identification.

### Monitoring Clients
Monitoring clients analyze server performance and operations, measure overall health, and alert administrators if servers are underperforming. They provide key metrics and automatically test server accessibility, response time, and error detection, including security vulnerabilities and missing or corrupt files.

## Issues with the Current Infrastructure

1. **Unencrypted Traffic Post Load Balancer**: SSL termination at the load balancer leaves traffic to the web servers unencrypted, posing a security risk.
2. **Single Point of Failure in Database**: A single MySQL server for write operations is not scalable and creates a potential single point of failure.
3. **Resource Contention**: Combining all components on the same servers can cause resource contention, leading to poor performance and making it difficult to isolate problems. This configuration is also not easily scalable.
