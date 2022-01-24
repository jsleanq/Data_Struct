#include<iostream>
#include"Sq_Stack.h"
using namespace std;

int main() {
	Seqstack S;
	double a, b, c, d;
	char exp[20];
	double num1, num2;
	cout << "输入a,b,c,d:";
	cin >> a >> b >> c >> d;
	cout << endl << "输入表达式：";
	cin >> exp;
	InitStack(S, 20);
	for (int i = 0; exp[i] != '\0'; i++) {
		switch (exp[i]) {
		case'+':
		case'-':
		case'*':
		case'/':
			Pop(S, num2);
			Pop(S, num1);
			if (exp[i] == '+') { Push(S, num1 + num2); };
			if (exp[i] == '-') { Push(S, num1 - num2); };
			if (exp[i] == '*') { Push(S, num1 * num2); };
			if (exp[i] == '/') { Push(S, num1 / num2); };
			break;
		default:
			if (exp[i] == 'a') { Push(S, a); };
			if (exp[i] == 'b') { Push(S, b); };
			if (exp[i] == 'c') { Push(S, c); };
			if (exp[i] == 'd') { Push(S, d); };
		}
	}
	Pop(S, num1);
	cout << endl << "结果为：" << num1;
	return 0;
}