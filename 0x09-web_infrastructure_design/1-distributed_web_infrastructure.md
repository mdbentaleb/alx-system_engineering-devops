# Distributed web infrastructure

![1-distributed_web_infrastructure](https://github.com/mdbentaleb/alx-system_engineering-devops/assets/132714803/b7289e81-ad38-4670-9826-a8ba43af02ad)

## Description:
This distributed web infrastructure is created to offload some of the traffic from the primary web server by the use of a replica server. This is handled through a load balancer that directs the load between the primary and replica servers.


## Specifics About This Infrastructure

- This setup includes a server containing a web server, application server, database, and code base, ensuring redundancy with another server.

- **The Distribution Algorithm**:
<br/>The HAProxy load balancer is configured with the Round Robin distribution algorithm.
<br/>This algorithm works by cycling through each server behind the load balancer in turn, according to their assigned weights.
<br/>It ensures a smooth and fair distribution of processing time among the servers. As a dynamic algorithm, Round Robin allows for real-time adjustments to server weights.

- The setup enabled by the **load balancer** entails the addition of a load balancer to distribute traffic between two servers, allowing the addition of failover capabilities.
<br/>The HAProxy load balancer is set for an Active-Passive setup rather than an Active-Active one.
<br/>In an Active-Active setup, the load balancer distributes workloads to all nodes at once, hence removing any single node from becoming burdened with more work.
<br/>This setup increases throughput and response times since there will be multiple active nodes.
<br/>In an Active-Passive setup, only one node is active at a time and is capable of handling workloads, while the other node is passive or on standby.
<br/>When the active node goes down, the passive node then takes its place and assumes being the active node.

- **How a Database Primary-Replica (Master-Slave) Cluster Works**:
<br/>A Primary-Replica setup configures one server as the Primary, usually referred to as the Master, and another as the Replica, usually referred to as the Slave.
<br/>The Primary server takes all read and write requests, while the Replica server only takes read requests.
<br/>The Primary and Replica servers synchronize data at the time the Primary server makes a write call.
<br/>In a MySQL Master-Replica cluster, the servers use replication to maintain the same data.

- **Differences Between the Primary and Replica Nodes for the Application**:
<br/>The Primary node performs all the write operations needed by the application, while the Replica node processes the read operations.
<br/>This segmentation offloads the read traffic from the Primary node, greatly increasing overall performance.


## Issues with This Infrastructure

+ **Summary:**
<br/>- The load balancer remains a single point of failure (SPOF).
<br/>- Servers lack firewall protection.
<br/>- Traffic is unencrypted.
<br/>- There is no monitoring.

+ **Specific Issues:**
<br/>*1. Multiple Single Points of Failure (SPOF)*:
<br/>- If the primary MySQL database server goes down, the entire site will be unable to make changes, such as adding or removing users.
<br/>- The server with the load balancer and the application server connecting to the primary database server are also SPOFs.
<br/>*2. Security Issues*:
<br/>- Data transmitted over the network is not encrypted with an SSL certificate, making it vulnerable to interception by hackers.
<br/>- Without a firewall, there is no way to block unauthorized IP addresses.
<br/>*3. Lack of Monitoring*:
<br/>- The status of each server is unknown due to the absence of monitoring tools.
