#pragma once
#include<iostream>
using namespace std;
const int Max = 100;

struct SqQueue {
	int data[Max];
	int front;
	int rear;
};

SqQueue Q;

Q.front = Q.rear = 0;

void EnQueue(SqQueue& Q,ElemType x) {
	if ((Q.rear + 1) % Max == Q.front){
		cout << "Full!";
	}
	else {
		Q.rear = (Q.rear + 1) % Max;
		Q.data[Q.rear] = x;
	}
}

ElemType DeQueue(SqQueue& Q) {
	if (Q.front  == Q.rear) {
		cout << "Empty!";
	}
	else {
		Q.front = (Q.front + 1) % Max;
	}
	return Q.data[Q.front];
}

ElemType GetHead(SqQueue& Q) {
	int i;
	if (Q.front == Q.rear) {
		cout << "Empty!";
	}
	else {
		i = (Q.front + 1) % Max;
	}
	return Q.data[i];
}