#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


string getLine(string);
int getInt(string);

string concat(string, string);
string mult(int, string);
int find(string, string);
string del(string, string);


void stringcalc() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "��� ��������� �����������. ������ ��������� ��������:" << endl
		<< "[+] ���������� �����." << endl
		<< "[*] ���������� ������ �������� ����� ���." << endl
		<< "[?] ����� ��������� � ������." << endl
		<< "[-] �������� ��������� �� ������." << endl << endl;

	char operation;
	cout << "������� ��������: "; cin >> operation;
	cin.ignore();

	switch (operation) {
	case '+': {
		string first = getLine("������� ������ ������: ");
		string second = getLine("������� ������ ������: ");
		cout << endl;
		string result = concat(first, second);
		cout << "��������� ����������� �����: " << result << endl;
		break;
	}
	case '*': {
		string str = getLine("������� ������: ");
		int n = getInt("������� ����� ����������: ");
		cout << endl;
		string result = mult(n, str);
		cout << "��������� ���������� ������: " << result << endl;
		break;
	}
	case '?': {
		string str = getLine("������� ������: ");
		string substr = getLine("������� ���������: ");
		cout << endl;
		int substr_start = find(substr, str);
		int substr_end = substr_start + substr.length();
		if (substr_start == -1) {
			cout << "������ �� �������� ��������� ���������!" << endl;
		}
		else {
			cout << "��������� ������� �� ������� " << substr_start << ":" << endl;
			cout << str << endl;
			for (int i = 0; i < str.length(); i++) {
				cout << (i >= substr_start && i < substr_end ? "^" : "~");
			}
			cout << endl;
		}
		break;
	}
	case '-': {
		string str = getLine("������� ������: ");
		string substr = getLine("������� ���������: ");
		cout << endl;
		string result = del(substr, str);
		cout << "��������� �������� ���������: " << result << endl;
		break;
	}
	default: {
		cout << "����������� ��������!" << endl;
	}
	}

	
}


// ����������� � ������������ ���� ������ ������ ���������� �����
string getLine(string input_text) {
	string user_input;
	cout << input_text;
	getline(cin, user_input);
	return user_input;
}


// ����������� � ������������ ���� ������ ����� ������ ���������� �����
int getInt(string input_text) {
	int user_input;
	cout << input_text;
	cin >> user_input;
	return user_input;
}


// ���������� ��� ������
string concat(string lhs, string rhs) {
	return lhs + rhs;
}


// ��������� ������ �������� ����� ���
string mult(int n, string str) {
	string mult_result = "";
	for (; n > 0; n--) {
		mult_result += str;
	}
	return mult_result;
}


// ������� ������ ��������� � ������
int find(string substr, string str) {
	return str.find(substr);
}


// ������� ��������� �� ������
string del(string substr, string str) {
	int substr_start = find(substr, str);
	int substr_end = substr_start + substr.length();
	string del_result = "";
	for (int i = 0; i < str.length(); i++) {
		if (i < substr_start || i >= substr_end) {
			del_result += str[i];
		}
	}
	return del_result;
}
