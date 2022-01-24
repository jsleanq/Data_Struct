#pragma once
using namespace std;

struct Seqstack {
	double* data;
	int top;
	int stacksize;
};

void InitStack(Seqstack& s, int size);
void Push(Seqstack& s, double x);
void Pop(Seqstack& s, double& x);