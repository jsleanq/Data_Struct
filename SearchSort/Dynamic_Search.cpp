typedef struct BinNode {
	ElemType x;
	struct BinNode* left, * right;
}*BinNodePtr;

//1.����������̬����
BinNode* Search_Btree(BinNodePtr &p,ElemType key) {
	while (p!=NULL && p->x != key){
		if (key < p->x){
			p = p->left;
		}
		else {
			p = p->right;
		}
	}
	return p;
}

//2.��������̬�����������
BinNode* Search_Insert(BinNodePtr& p, ElemType key) {
	BinNode* pre;
	//���ҹ���
	while (p != NULL && p->x != key) {
		pre = p;
		if (key < p->x) {
			p = p->left;
		}
		else {
			p = p->right;
		}
	}
	
	//����ʧ��
	if (p == NULL) {
		p = new BinNode;
		p->left = NULL;
		p->right = NULL;
		p->x = key;
		if (pre != nullptr) {
			if (pre->x > p->x) {
				pre->left = p;
			}
			else pre->right = p;
		}
	}
	return p;
}