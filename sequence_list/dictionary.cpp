/*
Project: sequence_list
Date:    2021/11/16
Author:  Ostrich_J

Insert(seqlist* L, word x )�����յ�����ĸ˳�����Ԫ��x
Delete(seqlist* L, char* pWord)��ɾ������x
Translate(seqlist* L, char* pWord)�����ҵ���x�ķ���

*/
#include<iostream>
#include"sequence_list.h"
using namespace std;

int main() {
	seqlist L;
	L.length = 0;
	word s;
	cout << "Input 3 words and the meaning:\n";
	for (int i = 0; i < 3; i++) {
		cin >> s.En >> s.Ch;
		Insert(&L, s);
	}

	char obj[30];
	cout << endl << "Delete words:\n";
	cin >> obj;
	Delete(&L, obj);
	cout << endl << "Which word you want find:\n";
	cin >> obj;
	Translate(&L, obj);
	return 0;
}