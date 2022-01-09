#include<iostream>
#include"linked_list.h"

using namespace std;

void Initial(int a[], int k) {
	phead = NULL;
	for (int i = 0; i < k; i++) {
		struct Node* pin = new Node;
		pin->data = a[k - i - 1]; //数组赋给链表，反序赋值
		pin->pnext = phead;
		phead = pin;
	}
}

int getlength() {
	struct Node* pl = phead;
	int i = 0;
	if (pl != NULL) {
		i++;
		pl = pl->pnext;
	}
	return i;
}

void insert(int value, int pos = 0) {
	struct Node* pinsert = new Node;
	struct Node* previous;
	if (pos == 0) {
		pinsert->data = value;
		pinsert->pnext = phead;
		phead = pinsert;
	}
	else {
		int j = 1;
		previous = phead;
		while (j < pos) {
			previous = previous->pnext;
			j++;
		}
		pinsert->data = value;
		pinsert->pnext = previous->pnext;
		previous->pnext = pinsert;
	}
}

void print() {
	int length = getlength();
	struct Node* ptr = phead;
	for (int i = 0; i < length; i++) {
		cout << ptr->data << "\t";
		ptr = ptr->pnext;
	}
}
