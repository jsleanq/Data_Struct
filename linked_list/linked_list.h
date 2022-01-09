#pragma once
#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* pnext;
};

struct Node* phead;

void Initial(int a[], int k);
int getlength();
void insert(int value, int pos);
void print();