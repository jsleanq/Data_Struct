#pragma once
#include<iostream>
using namespace std;
const int Max = 100;

struct SqQueue {
	int data[Max];
	int front;
	int rear;
};

void EnQueue(SqQueue& Q, int x);
int DeQueue(SqQueue& Q);
int GetHead(SqQueue& Q);