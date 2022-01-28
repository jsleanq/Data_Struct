#include"Graph_template.h"
#include<iostream>
using namespace std;

#define Max_Num 100//��󶥵����
bool visited[Max_Num];//���ʱ�־����

//�������
void DFSTraverse(ALGraph G) {
	for (int i = 0; i < G.vexnum; i++) {
		visited[i] = false;//��־�����ʼ��
	}
	for (int i = 0; i < G.vexnum; i++) {
		if (!visited[i]) {
			DFS(G, i);//��δ���ʵĶ������DFS�㷨
		}
	}
}

void DFS(ALGraph G,int i) {
	AdjNode* p;
	visited[i] = true;
	cout << i << "������";
	for (p = G.headArray[i].first; p != NULL; p = p->next) {
		if (!visited[p->adjvex]) {
			DFS(G, p->adjvex);
		}
	}
}