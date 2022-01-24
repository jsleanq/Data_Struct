#include<iostream>
#include"SortQueue.h"
using namespace std;


void EnQueue(SqQueue& Q, int x) {
	if ((Q.rear + 1) % Max == Q.front) {
		cout << "Full!";
	}
	else {
		Q.rear = (Q.rear + 1) % Max;
		Q.data[Q.rear] = x;
	}
}

int DeQueue(SqQueue& Q) {
	if (Q.front == Q.rear) {
		cout << "Empty!";
	}
	else {
		Q.front = (Q.front + 1) % Max;
	}
	return Q.data[Q.front];
}

int GetHead(SqQueue& Q) {
	int i;
	if (Q.front == Q.rear) {
		cout << "Empty!";
	}
	else {
		i = (Q.front + 1) % Max;
	}
	return Q.data[i];
}