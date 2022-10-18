#include <iostream>

struct Address
{
	std::string City;
	std::string Street;
	int Build_num;
	int Apt_num;
	int Index;
};


void print(Address *ad) {
	for (int i = 0; i < 2; i++) {
		std::cout <<"Город: "<<ad[i].City << std::endl;
		std::cout << "Улица: " << ad[i].Street << std::endl;
		std::cout << "Номер дома: " << ad[i].Build_num << std::endl;
		std::cout << "Номер квартиры: " << ad[i].Apt_num << std::endl;
		std::cout << "Индекс: " << ad[i].Index << std::endl;
		std::cout << std::endl;

	};

};

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");

	Address* address_array= new Address[2];
	std::cout << "Пожалуйста введите адрес" << std::endl;

	for (int i=0; i < 2; i++) {
		std::cout << "Введите город: " << std::endl;
		std::cin >> address_array[i].City;
		std::cout << "Введите улицу: " << std::endl;
		std::cin >> address_array[i].Street;
		std::cout << "Введите номер дома: " << std::endl;
		std::cin >> address_array[i].Build_num;
		std::cout << "Введите номер квартиры: " << std::endl;
		std::cin >> address_array[i].Apt_num;
		std::cout << "Введите индекс: " << std::endl;
		std::cin >> address_array[i].Index;
		std::cout << std::endl;

	};

	print(address_array);

	delete[] address_array;
	return 0;

}