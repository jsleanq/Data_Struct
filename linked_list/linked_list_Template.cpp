/*
Project: linked_list
Date:    2021/11/22
Author:  Ostrich_J

*/
#include<iostream>
using namespace std;

typedef struct LNode {
	ElemType data;
	LNode* next;
}LNode;

int ListSize(LNode * head) {
	LNode* p = head->next;
	int len = 0;
	while (p != NULL) {
		len++;
		p = p->next;
	}
	return len;
}

LNode* GetElemPointer(LNode* head,int pos) {
	if (pos < 0) { return NULL; }
	else if (pos == 0) { return head; }
	else {
		LNode* p = head->next;
		int k = 1;
		while (p != NULL && k < pos) {
			p = p->next;
			k++;
		}
		if (k == pos && p != NULL) {
			return p;
		}
		else
		{
			return NULL;
		}
	}
}

void Delete(LNode *head,int i){
	if (i < 1)cout << "No." << i << " element is not exist!" << endl;
	else {
		LNode* p = head;
		LNode* q;
		int k = 0;
		while (p != NULL && k < i) {
			q = p;
			p = p->next;
			k++;
		}
		if (p == NULL)cout << i << "out of the length!" << endl;
		else {
			q->next = p->next;
			delete p;
		}
	}
}

void Insert(LNode* head, int i,ElemType x) {
	if (i < 1)cout << "No." << i << " is not exist!" << endl;
	else {
		LNode* p = head;
		int k = 0;
		while (p != NULL && k < i-1) {
			p = p->next;
			k++;
		}
		if (p == NULL)cout << i << "out of the length!" << endl;
		else {
			LNode* s= new LNode;
			s->next = p->next;
			s->data = x;
			p->next = s;
		}
	}
}

LNode* Find(LNode* head, ElemType x) {
	LNode* p = head->next;
	while (p != NULL && p->data != x) {
			p = p->next;
		}
	return p;
}
