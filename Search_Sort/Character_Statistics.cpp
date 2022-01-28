#include<iostream>
using namespace std;

typedef struct BinNode {
	char info;
	int num;
	struct BinNode* left, * right;
}*BinNodePtr;

void Insert_Btree(BinNodePtr& root, char key) {
	BinNode* p = root, * pre = NULL;
	while (p != NULL && p->info != key) {
		pre = p;
		if (key < p->info) {
			p = p->left;
		}
		else {
			p = p->right;
		}
	}

	if (p == NULL) {
		p = new BinNode;
		p->left = NULL;
		p->right = NULL;
		p->info = key;
		p->num = 1;
		if (pre == NULL) {
			root = p;
		}
		else {
			if (pre->info > p->info) {
				pre->left = p;
			}
			else pre->right = p;
		}
	}
	else {
		p->num++;
	}
}

void InOrder(BinNode *t) {
	if (t != NULL) {
		InOrder(t->left);
		cout << "\t" << t->info << "\t" << t->num << endl;
		InOrder(t->right);
	}
}

int main() {
	char str[50];
	BinNode* root = NULL;
	cout << "输入字符串：" << endl;
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++) {
		Insert_Btree(root, str[i]);
	}
	cout << "字符  使用次数" << endl;
	InOrder(root);
	return 0;
}