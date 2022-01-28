#pragma once
#define Max_Num 100//��󶥵����

//�ڽӾ���洢ͼ

typedef struct {
	VertexType vexs[Max_Num];//������Ϣ���飬VertexTypeһ��Ϊ�ṹ�壬����������Ϣ
	ArcType Matrix[Max_Num][Max_Num];//�ڽӾ���
	int vexnum, arcnum;//ͼ��ʵ�ʶ������ͻ����ߣ���
	int kind;//ͼ�������־������ͼ��1������������2��������ͼ��3������������4��
}MGraph;

//�ڽӱ�洢ͼ

struct AdjNode {
	int adjvex;//�ڽӵ��������е�λ��
	InfoType info;//���������Ϣ
	struct AdjNode* next;
};//��������

typedef struct VNode {
	VertexType data;//��������
	AdjNode* first;//ָ���ڽӱ��һ�����
}AdjList[Max_Num]; //ͷ�ڵ㶨������

typedef struct {
	AdjList headArray;//ͷ�ڵ�����
	int vexnum, arcnum;//ͼ�Ľ����vexnum�ͱߣ�������arcnum
	int kind;//ͼ�������־������ͼ��1������������2��������ͼ��3������������4��
}ALGraph;
