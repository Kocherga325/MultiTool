#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>

bool triger = true;
void trigchange() { triger = !triger; }

void stopwatch()
{
	auto start = std::chrono::steady_clock::now();


	while (true)
	{


		if (_kbhit() && _getch() == 32)
			break;

		auto end = std::chrono::steady_clock::now();
		auto difference—alculation = end - start;
		system("cls");
		std::cout << "Ì‡ÊÏËÚÂ ÔÓ·ÂÎ ‰Îˇ ÓÒÚ‡ÌÓ‚ÍË: " << std::endl;
		std::cout << "œÓ¯Â‰¯ÂÂ ‚ÂÏˇ: "
			<< ceil(std::chrono::duration <double, std::milli>(difference—alculation).count() / 1000) - 1
			<< " s" << std::endl;

		std::this_thread::sleep_for(std::chrono::seconds(1));

	}
	system("pause");
	
}
