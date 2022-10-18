#include <iostream>

enum Months
{Jan,
Feb,
Mar,
Apr,
May,
Jun,
Jul,
Aug,
Sept,
Oct,
Nov,
Dec
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");
	int m = -1;

	while (m !=0) {
		std::cout << "Введите номер месяца: " << std::endl;
		std::cin >> m;
		switch (m) {
		case (Jan):
			std::cout << "Январь" << std::endl;
			break;
		case (Feb):
			std::cout << "Февраль" << std::endl;
			break;
		case (Mar):
			std::cout << "Март" << std::endl;
			break;
		case (Apr):
			std::cout << "Апрель" << std::endl;
			break;
		case (May):
			std::cout << "Май" << std::endl;
			break;
		case (Jun):
			std::cout << "Июнь" << std::endl;
			break;
		case (Jul):
			std::cout << "Июль" << std::endl;
			break;
		case (Aug):
			std::cout << "Август" << std::endl;
			break;
		case (Sept):
			std::cout << "Сентябрь" << std::endl;
			break;
		case (Oct):
			std::cout << "Октябрь" << std::endl;
			break;
		case (Nov):
			std::cout << "Ноябрь" << std::endl;
			break;
		case (Dec):
			std::cout << "Декабрь" << std::endl;
			break;

		default: std::cout << "Неправильный номер!" << std::endl;

		}

	}
	std::cout << "До свидания!" << std::endl;
	return 0;
	
}


