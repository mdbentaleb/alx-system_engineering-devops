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
<br/>In an Active-Active setup, the load balancer distributes workloads to all nodes at once, hence removing any single node from becoming burdened with more work. This setup increases throughput and response times since there will be multiple active nodes.
<br/>In an Active-Passive setup, only one node is active at a time and is capable of handling workloads, while the other node is passive or on standby. <br/>When the active node goes down, the passive node then takes its place and assumes being the active node.
