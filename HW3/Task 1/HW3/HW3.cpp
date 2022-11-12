#include <iostream>

class Calculator {
private:
    double num1, num2;
public:

    Calculator(double num1, double num2) {};

    double add(double &num1,double &num2) {
        return num1 + num2;
    };
    double multiply(double& num1, double& num2) {
        return num1 * num2;
    };
    double subtract_1_2(double& num1, double& num2) {
        return num2 - num1;
    };
    double subtract_2_1(double& num1, double& num2) {
        return num1 - num2;
    };
    double divide_1_2(double& num1, double& num2) {
        return num1 / num2;
    };
    double divide_2_1(double& num1, double& num2) {
        return num2 / num1;
    };
    bool set_num1(double& num1) {
        if (num1 != 0) {
            this-> num1 = num1;
            return true;
        }
        else {
            return false;
        };
    };
    bool set_num2(double& num2) {
        if (num1 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        };
    };
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    double num1, num2,oper;
    while (true) {
        std::cout << "Введите первое число: " << std::endl;
        std::cin >> num1;
        std::cout << "Введите второе число: " << std::endl;
        std::cin >> num2;
        if (num2 == 0) {
            std::cout << "Некорректное число! Введите,пожалуйста, другое число: " << std::endl;
            std::cin >> num2;
        };
        Calculator number(num1, num2);
        oper = number.add(num1, num2);
        std::cout << "num1 + num2 = " << oper << std::endl;
        oper = number.multiply(num1, num2);
        std::cout << "num1 * num2 = " << oper << std::endl;
        oper = number.subtract_1_2(num1, num2);
        std::cout << "num2 - num1 = " << oper << std::endl;
        oper = number.subtract_2_1(num1, num2);
        std::cout << "num1 - num2 = " << oper << std::endl;
        oper = number.divide_1_2(num1, num2);
        std::cout << "num1 / num2 = " << oper << std::endl;
        oper = number.divide_2_1(num1, num2);
        std::cout << "num2 / num1 = " << oper << std::endl;
    };
    return 0;
};
