# Queue

队列：循环队列和链队列

循环队列：头指针（front）和尾指针（rear）

​	入队操作：`rear = (rear + 1) % M`（M为队列元素总数）

​	出队操作：`front = (front + 1) % M`（M为队列元素总数）

​	队空条件：`front = rear`，队满条件：`(rear + 1) % M = front `



利用队列进行一组整数排序（*）