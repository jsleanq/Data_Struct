#include"Graph_template.h"
#include<iostream>
using namespace std;

#define Max_Num 100//最大顶点个数
bool visited[Max_Num];//访问标志数组

//广度优先
void BFSTraverse(ALGraph G) {
	for (int i = 0; i < G.vexnum; i++) {
		visited[i] = false;//标志数组初始化
	}
	for (int i = 0; i < G.vexnum; i++) {
		if (!visited[i]) {
			BFS(G, i);//尚未访问的顶点调用BFS算法
		}
	}
}
//从第i个顶点出发递归广度优先遍历图G中的某个连通子图

void BFS(ALGraph G, int i) {
	int queue[G.vexnum];//数组存放队列
	int front, rear = 0;
	cout << i << "被访问";
	visited[i] = true;
	rear = (rear + 1) % G.vexnum;
	queue(rear) = i;//i进队列
	AdjNode* p;
	while (front != rear) {//队空搜索结束
		front = (front + 1) % G.vexnum;
		int j = queue[front];//出队列
		p = G.headArray[j].first;//顶点j的第一个邻接点的指针p
		while (p != NULL) {//邻接顶点p存在
			if (!visited[p->adjvex]) {//邻接顶点p未被访问过
				cout << p->adjvex << "被访问";//访问顶点p
				visited[p->adjvex] = true;
				rear = (rear + 1) % G.vexnum;
				queue[rear] = p->adjvex; //p->adjvex进队列
			}
			p = p->next;//取顶点j的排在p后面的下一邻接点
		}
	}
}