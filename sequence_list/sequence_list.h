#include<iostream>
using namespace std;
const int MaxSize = 100;

struct word {
	char En[30];
	char Ch[30];
};

struct seqlist {
	word data[MaxSize];
	int length;

};


void Insert(seqlist* L, word x);
void Delete(seqlist* L, char* pWord);
void Translate(seqlist* L, char* pWord);
