//迷宫问题，多维数组表示迷宫，从a到b，简单路径
//位置（i，j），path[]=1，表示可以行走
//棋类问题、八皇后问题
#include<iostream>
using namespace std;

int top(-1);
int posx[30], posy[30];
const int endx = 6, endy = 6;
const int M = 7;
int stop = 0;

//判断（x，y）是否出现过
bool Check(int x,int y ) {
	bool flag = true;
	for (int i = 0; i <= top; i++) {
		if (posx[i] == x && posy[i] == y) {
			flag = false;
		}
	}
	return flag;
}

void Go(int a[M][M], int i, int j) {
	if (a[i][j] == 1 && Check(i, j)) {
		top++;
		posx[top] = i;
		posy[top] = j;
		if (endx == i && endy == j) {stop = 1;}
		if (j + 1 < M && !stop) { Go(a, i, j + 1); }
		if (i + 1 < M && !stop) { Go(a, i + 1, j); }
		if (j > 0 && !stop) { Go(a, i, j - 1); }
		if (i > 0 && !stop) { Go(a, i - 1, j); }
		if (!stop) { top--; }
	}
}

void main() {
	int path[7][7] = {
		{1,1,0,1,1,1,0},
		{1,1,1,1,0,1,1},
		{1,1,0,0,1,0,0},
		{1,0,1,1,1,1,1},
		{1,1,1,0,1,0,1},
		{0,1,0,1,1,0,0},
		{1,0,1,1,1,1,1} };
	Go(path, 0, 0);
	cout << "最终找到的路径为：" << endl;
	for (int k = 0; k <= top; k++) {
		cout << "(" << posx[k] << "," << posy[k] << ")";
		if (k < top) {
			cout << "->";
		}
	}
}