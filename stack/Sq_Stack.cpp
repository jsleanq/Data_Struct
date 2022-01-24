#include<iostream>
#include"Sq_Stack.h"
using namespace std;

void InitStack(Seqstack &s, int size) {
	if (size > 0) {
		s.stacksize = size;
		s.top = -1;
		s.data = new double[size];
	}
	else {
		cout << "Error!";
	}
}

void Push(Seqstack& s, double x) {
	if (s.top < s.stacksize - 1) {
		s.top++;
		s.data[s.top] = x;
	}
	else {
		cout << "Full!";
	}
}

void Pop(Seqstack& s, double& x) {
	if (s.top > -1) {
		x = s.data[s.top];
		s.top--;
	}
	else {
		cout << "Empty!";
	}
}