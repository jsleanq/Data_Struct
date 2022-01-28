#include"Graph_template.h"
#include<iostream>
using namespace std;

#define Max_Num 100//��󶥵����
bool visited[Max_Num];//���ʱ�־����

//�������
void BFSTraverse(ALGraph G) {
	for (int i = 0; i < G.vexnum; i++) {
		visited[i] = false;//��־�����ʼ��
	}
	for (int i = 0; i < G.vexnum; i++) {
		if (!visited[i]) {
			BFS(G, i);//��δ���ʵĶ������BFS�㷨
		}
	}
}
//�ӵ�i����������ݹ������ȱ���ͼG�е�ĳ����ͨ��ͼ

void BFS(ALGraph G, int i) {
	int queue[G.vexnum];//�����Ŷ���
	int front, rear = 0;
	cout << i << "������";
	visited[i] = true;
	rear = (rear + 1) % G.vexnum;
	queue(rear) = i;//i������
	AdjNode* p;
	while (front != rear) {//�ӿ���������
		front = (front + 1) % G.vexnum;
		int j = queue[front];//������
		p = G.headArray[j].first;//����j�ĵ�һ���ڽӵ��ָ��p
		while (p != NULL) {//�ڽӶ���p����
			if (!visited[p->adjvex]) {//�ڽӶ���pδ�����ʹ�
				cout << p->adjvex << "������";//���ʶ���p
				visited[p->adjvex] = true;
				rear = (rear + 1) % G.vexnum;
				queue[rear] = p->adjvex; //p->adjvex������
			}
			p = p->next;//ȡ����j������p�������һ�ڽӵ�
		}
	}
}