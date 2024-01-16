#include <iostream>


using namespace std;
void BYNto() {
	setlocale(LC_ALL, "Russian");
	float inputBYN, outputUSD, outputEURO, outputRUB;

	cout << "¬ведите сумму в BYN: ";
	cin >> inputBYN;

	outputUSD = inputBYN * 0.32;
	outputEURO = inputBYN * 0.2918;
	outputRUB = inputBYN * 27.86;

	cout << inputBYN << " BYN = " << outputUSD << " USD\n";
	cout << inputBYN << " BYN = " << outputEURO << " EUR\n";
	cout << inputBYN << " BYN = " << outputRUB << " RUB\n";
}
void USDto() {
	setlocale(LC_ALL, "Russian");
	float inputUSD, outputBYN, outputEURO, outputRUB;

	cout << "¬ведите сумму в USD: ";
	cin >> inputUSD;

	outputBYN = inputUSD * 3.1481;
	outputEURO = inputUSD * 0.9188;
	outputRUB = inputUSD * 87.72;

	cout << inputUSD << " USD = " << outputBYN << " BYN\n";
	cout << inputUSD << " USD = " << outputEURO << " EUR\n";
	cout << inputUSD << " USD = " << outputRUB << " RUB\n";
}
void EUROto() {
	setlocale(LC_ALL, "Russian");
	float inputEURO, outputBYN, outputUSD, outputRUB;

	cout << "¬ведите сумму в EUR: ";
	cin >> inputEURO;

	outputBYN = inputEURO * 3.4265;
	outputUSD = inputEURO * 1.09;
	outputRUB = inputEURO * 95.47;

	cout << inputEURO << " EUR = " << outputBYN << " BYN\n";
	cout << inputEURO << " EUR = " << outputUSD << " USD\n";
	cout << inputEURO << " EUR = " << outputRUB << " RUB\n";
}
void RUBto() {
	setlocale(LC_ALL, "Russian");
	float inputRUB, outputBYN, outputUSD, outputEURO;

	cout << "¬¬едите сумму в RUB: ";
	cin >> inputRUB;

	outputBYN = inputRUB * 0.036;
	outputUSD = inputRUB * 0.0114;
	outputEURO = inputRUB * 0.0105;

	cout << inputRUB << " RUB = " << outputBYN << " BYN\n";
	cout << inputRUB << " RUB = " << outputUSD << " USD\n";
	cout << inputRUB << " RUB = " << outputEURO << " EUR\n";
}
void converter() {
	setlocale(LC_ALL, "Russian");
	float  inputEURO, inputRUB, outputBYN, outputUSD, outputEURO, outputRUB;
	int ChooseInput;
	cout << "¬ведите ¬алюту, которую хотите перевести(за 16.01.2024): (1 - BYN, 2 - USD, 3 - EURO, 4 - RUB) \n";
	cin >> ChooseInput;
	switch (ChooseInput)
	{
	case 1: BYNto(); break;

	case 2: USDto(); break;

	case 3: EUROto(); break;

	case 4: RUBto(); break;
	default:
		break;
	}
}