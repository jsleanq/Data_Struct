#include<iostream>
#include"linked_list.h"
using namespace std;

int main() {
	int a[5] = {12,25,16,10,23};
	Initial(a,5);
	cout << "链表初始化为：\n";
	print();
	printf("\n在头部插入72，在4号下标位置插入9，最后为:\n");
	insert(72, 0);
	insert(9, 4);
	print();
	printf("\n删除3号下标位置的值后为:\n");
	deleteitem(3);
	print();
	printf("\n排序后为:\n");
	sort();
	print();
	return 0;
}