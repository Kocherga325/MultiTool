#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
string buff; char operat;
int a_num, b_num;

bool isNumber(const string& str)
{
    for (char const& c : str) {
        if (isdigit(c) == 0)
            return false;
    }
    return true;
}

void calculator()
{
    system("chcp 1251 > nul");

    cout << "������� 1-� �����" << endl;
    cin >> buff;
    if (!isNumber(buff)) {
        cout << "������: ������� ������ � ������������� ���������" << endl;
        system("pause");
        return;
    }
    a_num = stoi(buff);

    cout << "������� ��������(+,-,*,/)" << endl;
    cin >> buff;
    operat = buff.at(0);
    cout << endl;

    cout << "������� 2 �����" << endl;
    cin >> buff;
    if (!isNumber(buff)) {
        cout << "������: ������� ������ � ������������� ���������" << endl;
        system("pause");
        return;
    }
    b_num = stoi(buff);
    cout << endl;

    switch (operat)
    {
    case '+': cout << "����� = " << (a_num + b_num) << endl; ; break;
    case '-': cout << "����� = " << (a_num - b_num) << endl; ; break;
    case '/':if (b_num == 0)
    {
        cout << "math error" << endl; ; break;
    }
            else {
        cout << (a_num / b_num) << endl; ; break;
    }

    case '*': cout << "����� = " << (a_num * b_num) << endl; ; break;
    case '%': cout << "����� = " << (a_num % b_num) << endl; ; break;
    default:
        cout << "������" << endl; break;
    }

    system("pause");
}