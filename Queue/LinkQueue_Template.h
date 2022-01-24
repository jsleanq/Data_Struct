#pragma once
#include<iostream>
using namespace std;

struct QNode {
	ElemType data;
	struct QNode* next;
};

struct LinkQueue {
	QNode* front;
	QNode* rear;
};

void InitQueue(LinkQueue &Q) {
	Q.front = new QNode;
	Q.front->next = NULL;
	Q.rear = Q.front;
}

int QueueLength(LinkQueue& Q) {
	int length = 0;
	QNode* p = Q.front;
	while (p != NULL) {
		length++;
		p = p->next;
	}
	return length;
}

void EnQueue(LinkQueue &Q,ElemType x) {
	QNode* p = new QNode;
	p->data = x;
	p->next = NULL;
	Q.rear->next = p;
	Q.rear = p;
}

void DeQueue(LinkQueue& Q,ElemType &x) {
	QNode* p = new QNode;
	if (Q.front->next == NULL) {//front == rear or front->next = null?
		cout << "Empty!";
	}
	else {
		p = Q.front->next;
		x = p->data;
		Q.front->next = p->next;
		if (Q.rear == p) {
			Q.rear = Q.front;
		}
		delete p;
	}
}

void GetHead(LinkQueue& Q,ElemType &x) {
	QNode* p = new QNode;
	if (Q.front->next == NULL) {//front == rear or front->next = null?
		cout << "Empty!";
	}
	else {
		p = Q.front->next;
		x = p->data;
	}
	delete p;
}