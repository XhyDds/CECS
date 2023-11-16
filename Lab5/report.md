## 1
>Q:在 AXI4 协议中，写操作分为哪三类握手，它们在一次写事务中的进行顺序是怎样的？
A:写地址握手、写数据握手、写响应握手。先写地址，再写数据，最后写响应。

## 2
>Q:你认为为什么要先响应 DCache 的读请求？（提示：请你阅读流水线代码，观察 ICache 请求是否会阻塞 ID 之后的流水线？）
A:因为在这里的设计中，Icache阻塞不会影响ID之后的流水线，而Dcache阻塞会影响WB之前的所有流水线。先响应Icache，也会在响应完Icache后再次响应Dcache，流水线始终停顿；先响应Dcache，则可以让ID之后的流水线继续正常流动。所以先响应Dcache的读请求，可以减少阻塞时间，提高效率。

## 3
>Q:你对本次实验有什么意见或建议？
>A:无