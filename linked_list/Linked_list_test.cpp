#include<iostream>
#include"linked_list.h"
using namespace std;

int main() {
	int a[5] = {12,25,16,10,23};
	Initial(a,5);
	cout << "�����ʼ��Ϊ��\n";
	print();
	printf("\n��ͷ������72����4���±�λ�ò���9�����Ϊ:\n");
	insert(72, 0);
	insert(9, 4);
	print();
	printf("\nɾ��3���±�λ�õ�ֵ��Ϊ:\n");
	deleteitem(3);
	print();
	printf("\n�����Ϊ:\n");
	sort();
	print();
	return 0;
}