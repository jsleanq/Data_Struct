#include"Graph_template.h"
#include<iostream>
using namespace std;

#define Max_Num 100//最大顶点个数
bool visited[Max_Num];//访问标志数组

//深度优先
void DFSTraverse(ALGraph G) {
	for (int i = 0; i < G.vexnum; i++) {
		visited[i] = false;//标志数组初始化
	}
	for (int i = 0; i < G.vexnum; i++) {
		if (!visited[i]) {
			DFS(G, i);//尚未访问的顶点调用DFS算法
		}
	}
}

void DFS(ALGraph G,int i) {
	AdjNode* p;
	visited[i] = true;
	cout << i << "被访问";
	for (p = G.headArray[i].first; p != NULL; p = p->next) {
		if (!visited[p->adjvex]) {
			DFS(G, p->adjvex);
		}
	}
}