#pragma once
#include <iostream>
using namespace std;

struct BinTreeNode {
	ElemType data;
	struct BinTreeNode* leftChild, * rightChild;
};

BinTreeNode* root;//�������ڵ�ָ��
root = NULL;//�������

bool IsEmptyTree(BinTreeNode* root) {
	return root == NULL;
}

void PreOrder(BinTreeNode* root) {
	if (root) {
		Visit(root);//���ʸ��ڵ㣬����Ҫ��д
		PreOrder(root->leftChild);
		PreOrder(root->rightChild);
	}
}

void InOrder(BinTreeNode* root) {
	if (root) {
		InOrder(root->leftChild);
		Visit(root);//���ʸ��ڵ㣬����Ҫ��д
		InOrder(root->rightChild);
	}
}

void PostOrder(BinTreeNode* root) {
	if (root) {
		PostOrder(root->leftChild);
		PostOrder(root->rightChild);
		Visit(root);//���ʸ��ڵ㣬����Ҫ��д
	}
}