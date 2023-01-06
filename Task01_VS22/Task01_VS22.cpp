// Task01_VS22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

enum months
{
	Январь = 1,
	Февраль,
	Март,
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь
};

int main() {
	setlocale(LC_ALL, "Russian");

	bool condition = 1;
	do {
		int x = 0;
		std::cout << "Введите число\n";
		std::cin >> x;

		months month = static_cast<months>(x); // не понимаю, почему оно не ругается при x - не входящем в перечисление 
		//std::cout << static_cast<int>(month);

		switch (month)
		{
		case 1:
			std::cout << "Январь" << std::endl;
			break;
		case 2:
			std::cout << "Февраль" << std::endl;
			break;
		case 3:
			std::cout << "Март" << std::endl;
			break;
		case 4:
			std::cout << "Апрель" << std::endl;
			break;
		case 5:
			std::cout << "Май" << std::endl;
			break;
		case 6:
			std::cout << "Июнь" << std::endl;
			break;
		case 7:
			std::cout << "Июль" << std::endl;
			break;
		case 8:
			std::cout << "Аргуст" << std::endl;
			break;
		case 9:
			std::cout << "Сентябрь" << std::endl;
			break;
		case 10:
			std::cout << "Октябрь" << std::endl;
			break;
		case 11:
			std::cout << "Ноябрь" << std::endl;
			break;
		case 12:
			std::cout << "Декабрь" << std::endl;
			break;
		case 0:
			std::cout << "До свидания" << std::endl;
			condition = 0;
			break;
		default:
			std::cout << "Неправильный номер!" << std::endl;
			break;
		}
	} while (condition != 0);
}