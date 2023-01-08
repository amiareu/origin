#include <iostream>
#include<Windows.h>

class Counter {
private:
    int init_val=1;
public:
    int Getval() {
        return init_val;
    };
    int Setval(int init_val) {
        this->init_val = init_val;
        return init_val;
    };
    int Plus() {
       return init_val += 1;
    };
    int Minus() {
        return init_val -= 1;
    };
    int Curr() {
        return init_val;
    };

};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string repl,act;
    int val;
    Counter value;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> repl;
    if (repl == "да"||repl=="Да" || repl == "дА" || repl == "ДА") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> val;
        value.Setval(val);
    };
    std::cout << "Введите команду +, -, = или х: ";
    std::cin >> act;
    while (act != "x") {
        while (act != "=") {
            if (act == "+") {
                value.Plus();
                std::cout << "Введите команду +, -, = или х: ";
                std::cin >> act;
            };
            if (act == "-") {
                value.Minus();
                std::cout << "Введите команду +, -, = или х: ";
                std::cin >> act;
            };
        };
        std::cout << value.Curr() << std::endl;
        std::cout << "Введите команду +, -, = или х: ";
        std::cin >> act;
    };
    std::cout << "До свидания!" << std::endl;
}

