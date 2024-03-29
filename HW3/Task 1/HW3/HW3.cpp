﻿#include <iostream>

class Calculator {
private:
    double numb1, numb2;
public:
    
    double GetNum1() {
        return numb1;
    };

    bool SetNum1(double numb1) {
        if (numb1 != 0) {
            this->numb1 = numb1;
        }
        else {
            return false;
        };
    };
    double GetNum2() {
        return numb2;
    };

    bool SetNum2(double numb2) {
        if (numb2 != 0) {
            this->numb2 = numb2;
        }
        else {
            return false;
        };
    };

    double add() {
        return numb1 + numb2;
    };
    double multiply() {
        return numb1 * numb2;
    };
    double subtract_1_2() {
        return numb2 - numb1;
    };
    double subtract_2_1() {
        return numb1 - numb2;
    };
    double divide_1_2() {
        return numb1 / numb2;
    };
    double divide_2_1() {
        return numb2 / numb1;
    };
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    double num1, num2,oper;
    Calculator number;
    
        std::cout << "Введите первое число: " << std::endl;
        std::cin >>num1;

        while (number.SetNum1(num1)==false) {
            std::cout << "Некорректное число! Введите,пожалуйста, другое число: " << std::endl;
            std::cin >> num1;
            number.SetNum1(num1);
        };
        std::cout << "Введите второе число: " << std::endl;
        std::cin >> num2;
        
        while (number.SetNum2(num2) == false) {
            std::cout << "Некорректное число! Введите,пожалуйста, другое число: " << std::endl;
            std::cin >> num2;
            number.SetNum2(num2);
        };
        
      
        oper = number.add();
        std::cout << "num1 + num2 = " << oper << std::endl;
        oper = number.multiply();
        std::cout << "num1 * num2 = " << oper << std::endl;
        oper = number.subtract_1_2();
        std::cout << "num2 - num1 = " << oper << std::endl;
        oper = number.subtract_2_1();
        std::cout << "num1 - num2 = " << oper << std::endl;
        oper = number.divide_1_2();
        std::cout << "num1 / num2 = " << oper << std::endl;

  
    return 0;
};
