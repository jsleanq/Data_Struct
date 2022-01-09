#include<iostream>
#include<string>
#include"sequence_list.h"

/*≥£πÊ–¥∑®
void Insert(seqlist* L, int i, word x) {

	if (i<1 || i>L->length + 1 || L->length == MaxSize) {
		cout << "Error! or Full!";
	}
	else
	{
		for (int j = L->length - 1; j >= i - 1; j--) {
			L->data[j + 1] = L->data[j];
		}
		L->data[i] = x;
		L->length++;
	}
}

void Delete(seqlist* L, int i) {

	if (i<1 || i>L->length) {
		cout << "Error! ";
	}
	else
	{
		for (int j = i;j <= L->length - 1; j++){
			L->data[j - 1] = L->data[j];
		}
		L->length--;
	}
}

int Find(seqlist* L, word x) {
	for (int i = 0; i < L->length; i++) {
		if (L->data[i].En == x.En && L->data[i].Ch == x.Ch) {
			return i + 1;
		}
	}
	return 0;
}

*/

void Insert(seqlist* L, word x) {
	int j = L->length - 1;
	if (L->length > 0 && L->length < MaxSize) {
		while (strcmp(L->data[j].En, x.En) > 0 && j >= 0) {
			L->data[j + 1] = L->data[j];
			j--;
		}
	}
	L->data[j + 1] = x;
	L->length++;
}

void Delete(seqlist* L, char* pWord) {
	int j = 0;
	while (strcmp(L->data[j].En, pWord) != 0 && j < L->length) {
		j++;
	}
	if (j >= L->length) {
		cout << "No this word!";
	}
	else {
		for (int i = j; i < L->length - 1; i++) {
			L->data[i] = L->data[i + 1];
		}
		L->length--;
		cout << "Delete!";
	}
}

void Translate(seqlist* L, char* pWord) {
	int j = 0;
	while (strcmp(L->data[j].En, pWord) != 0 && j < L->length) {
		j++;
	}
	if (j = L->length) {
		cout << "No this word!";
	}
	else {
		cout << L->data[j].En << "\t" << L->data[j].Ch << endl;
	}
}
