#pragma once
#include<iostream>
using namespace std;

typedef struct node {
	ElemType data;
	struct node* next;
}SNode,*LinkStack;//别名

LinkStack top;//链式栈，包括数据和指针域

void Push(LinkStack &top,ElemType x) {
	SNode* p = new node;
	if (p != NULL) {
		p->next = top;
		p->data = x;
		top = p;
	}
}

void Pop(LinkStack& top, ElemType& x) {
	SNode* p;
	if (top != NULL) {
		x = top->data;
		p = top;
		top = top->next;
		delete p;
	}
}