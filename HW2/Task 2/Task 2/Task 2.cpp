#include <iostream>

struct Acc_dets
{
	int Acc_num, Balance;
	std::string Name;

};

int balanceupd(Acc_dets& acc,int &new_balance ) {
	acc.Balance = new_balance;
	return acc.Balance;
};

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	int new_balance;
	Acc_dets account;
	std::cout << "Введите, пожалуйста, данные Вашего счета" << std::endl;
	std::cout<<"Введите номер счёта: " << std::endl;
    std::cin >> account.Acc_num;
	std::cout << "Введите имя владельца: " << std::endl;
	std::cin >> account.Name;
	std::cout << "Введите баланс: " << std::endl;
	std::cin >> account.Balance;
	std::cout << "Введите новый баланс: " << std::endl;
	std::cin >> new_balance;
	balanceupd(account, new_balance);
	std::cout << "Ваш счёт: " << account.Name << ", " << account.Acc_num << ", " << account.Balance << std::endl;

	return 0;





}
