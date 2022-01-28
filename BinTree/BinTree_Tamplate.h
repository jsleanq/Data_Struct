#pragma once
#include <iostream>
using namespace std;

struct BinTreeNode {
	ElemType data;
	struct BinTreeNode* leftChild, * rightChild;
};

BinTreeNode* root;//保留根节点指针
root = NULL;//定义空树

bool IsEmptyTree(BinTreeNode* root) {
	return root == NULL;
}

void PreOrder(BinTreeNode* root) {
	if (root) {
		Visit(root);//访问根节点，根据要求写
		PreOrder(root->leftChild);
		PreOrder(root->rightChild);
	}
}

void InOrder(BinTreeNode* root) {
	if (root) {
		InOrder(root->leftChild);
		Visit(root);//访问根节点，根据要求写
		InOrder(root->rightChild);
	}
}

void PostOrder(BinTreeNode* root) {
	if (root) {
		PostOrder(root->leftChild);
		PostOrder(root->rightChild);
		Visit(root);//访问根节点，根据要求写
	}
}