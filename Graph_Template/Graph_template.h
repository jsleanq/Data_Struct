#pragma once
#define Max_Num 100//最大顶点个数

//邻接矩阵存储图

typedef struct {
	VertexType vexs[Max_Num];//顶点信息数组，VertexType一般为结构体，包含多种信息
	ArcType Matrix[Max_Num][Max_Num];//邻接矩阵
	int vexnum, arcnum;//图的实际顶点数和弧（边）数
	int kind;//图的种类标志：有向图（1），有向网（2），无向图（3），无向网（4）
}MGraph;

//邻接表存储图

struct AdjNode {
	int adjvex;//邻接点在数组中的位置
	InfoType info;//弧的相关信息
	struct AdjNode* next;
};//表结点类型

typedef struct VNode {
	VertexType data;//顶点类型
	AdjNode* first;//指向邻接表第一个结点
}AdjList[Max_Num]; //头节点定义类型

typedef struct {
	AdjList headArray;//头节点数组
	int vexnum, arcnum;//图的结点数vexnum和边（弧）数arcnum
	int kind;//图的种类标志：有向图（1），有向网（2），无向图（3），无向网（4）
}ALGraph;
