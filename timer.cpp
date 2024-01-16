#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>

bool triger = true;
void trigchange() { triger = !triger; }

void timer()
{
	auto start = std::chrono::steady_clock::now();


	while (true)
	{


		if (_kbhit() && _getch() == 32)
			break;

		auto end = std::chrono::steady_clock::now();
		auto diff = end - start;
		system("cls");
		std::cout << "нажмите пробел для остановки: " << std::endl;
		std::cout << "Прошедшее время: "
			<< ceil(std::chrono::duration <double, std::milli>(diff).count() / 1000) - 1
			<< " s" << std::endl;

		std::this_thread::sleep_for(std::chrono::seconds(1));

	}
	system("pause");
	
}
