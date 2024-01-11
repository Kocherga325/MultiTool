
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
string buff; char operat;
int a_num, b_num;

void calculator()
{
	system("chcp 1251 > nul");

	cout << "введите 1-е число" << endl;
	cin >> buff;
	try
	{
		a_num = stoi(buff);
	}
	catch (invalid_argument)
	{
		cout << "syntax error" << endl; system("pause");
	}

	cout << "введите оператор(+,-,*,/)" << endl;
	cin >> buff;
	operat = buff.at(0);
	cout << endl;
	cout << "введите 2 число" << endl;
	cin >> buff;
	try
	{
		b_num = stoi(buff);
	}
	catch (invalid_argument)
	{
		cout << "syntax error" << endl; system("pause");
	}
	cout << endl;

	switch (operat)
	{
	case '+': cout << "Ответ = " << (a_num + b_num) << endl; ; break;
	case '-': cout << "Ответ = " << (a_num - b_num) << endl; ; break;
	case '/':if (b_num == 0)
	{
		cout << "math error" << endl; ; break;
	}
			else {
		cout << (a_num / b_num) << endl; ; break;
	}

	case '*': cout << "Ответ = " << (a_num * b_num) << endl; ; break;
	case '%': cout << "Ответ = " << (a_num % b_num) << endl; ; break;
	default:
		cout << "syntax error" << endl; break;
	}


	system("pause");

}