﻿#include <iostream>
#include <Windows.h>
#include <string>

#include "choose.h"



using namespace std;

void stringcalc();
void calculator();
void converter();
void stopwatch();
void exitfromapp();

int main()
{
    setlocale(LC_CTYPE, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choose;

    cout << "Выберите вариант:\n";
    cout << "1. Строковый калькулятор\n";
    cout << "2. Калькулятор\n";
    cout << "3. Конвертер\n";
    cout << "4. Секундомер\n";
    cout << "5. Выход\n";

        while (true) {
            cout << "Baш выбор: ";
            cin >> choose;
            if (choose == 1) {
                stringcalc();
            }
            else
                if (choose == 2) {
                    calculator();
                }
                else
                    if (choose == 3) {
                        converter();
                    }
                    else
                        if (choose == 4) {
                            stopwatch();
                        }
                        else
                            if (choose == 5) {
                                exitfromapp();
                            }
                            cout << "Введите вариант от 1 до 5." << endl;
        }


    return 0;
}



