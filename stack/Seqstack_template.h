#pragma once
#include<iostream>
using namespace std;

struct Seqstack {
	ElemType* data;//ʹ��ջǰ��Ҫ��������ĳ�ʼ��
	//��̬���鶨�巽ʽ

	int top;
	int stacksize;
};//˳��ջ

Seqstack s;//����һ��˳��ջ

void InitStack(Seqstack* s, int size) {
	if (size > 0) {
		s->stacksize = size;
		s->top = -1;
		s->data = new ElemtType[size];
	}
	else {
		cout << "Error!";
	}
}

void Push(Seqstack* s, ElemType x) {
	if (s->top < s->stacksize - 1) {
		s->top++;
		s->data[s->top] = x;
	}
	else {
		cout << "Full!";
	}
}

void Pop(Seqstack *s,ElemType &x) {
	if (s->top > -1) {
		x = s->data[s->top];
		s->top--;
	}
	else {
		cout << "Empty!";
	}
}

void GetTop(Seqstack *s,ElemType &x) {
	if (s->top > -1) {
		x = s->data[s->top];
	}
	else {
		cout << "Empty!";
	}
}