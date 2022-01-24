#include<iostream>
#include"SortQueue.h"
using namespace std;

int main() {
	SqQueue Q[2];
	Q[0].front = Q[0].rear = 0;
	Q[1].front = Q[1].rear = 0;
	int t[5];
	cout << "Input 5 numbers:";
	for (int i = 0; i < 5; i++) {
		cin >> t[i];
	}
	int k = 0, j;
	EnQueue(Q[k], t[0]);
	for (int i = 1; i < 5; i++) {
		j = (k + 1) % 2;
		while (Q[k].front != Q[k].rear && t[i] > GetHead(Q[k])) {
			EnQueue(Q[j], DeQueue(Q[k]));
		}
		EnQueue(Q[j],t[i]);
		while (Q[k].front != Q[k].rear) {
			EnQueue(Q[j], DeQueue(Q[k]));
		}
		k = j;
	}
	cout << "Result:";
	while (Q[k].front != Q[k].rear) {
		cout << DeQueue(Q[j]) << " ";
	}
	return 0;
}