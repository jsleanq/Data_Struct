typedef struct BinNode {
	ElemType x;
	struct BinNode* left, * right;
}*BinNodePtr;

//1.二叉树排序静态查找
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

//2.二叉树动态查找与结点插入
BinNode* Search_Insert(BinNodePtr& p, ElemType key) {
	BinNode* pre;
	//查找过程
	while (p != NULL && p->x != key) {
		pre = p;
		if (key < p->x) {
			p = p->left;
		}
		else {
			p = p->right;
		}
	}
	
	//查找失败
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