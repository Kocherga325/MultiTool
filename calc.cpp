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

    cout << "введите 1-е число" << endl;
    cin >> buff;
    if (!isNumber(buff)) {
        cout << "Ошибка: введена строка с недопустимыми символами" << endl;
        system("pause");
        return;
    }
    a_num = stoi(buff);

    cout << "введите оператор(+,-,*,/)" << endl;
    cin >> buff;
    operat = buff.at(0);
    cout << endl;

    cout << "введите 2 число" << endl;
    cin >> buff;
    if (!isNumber(buff)) {
        cout << "Ошибка: введена строка с недопустимыми символами" << endl;
        system("pause");
        return;
    }
    b_num = stoi(buff);
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
        cout << "Ошибка" << endl; break;
    }

    system("pause");
}