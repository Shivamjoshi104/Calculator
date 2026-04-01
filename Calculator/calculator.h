#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

class Basic {
private:
    double num1;
    double num2;

public:
    void input() {
        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter second number: ";
        std::cin >> num2;
    }

    void add() const {
        std::cout << "Result: " << (num1 + num2) << std::endl;
    }

    void sub() const {
        std::cout << "Result: " << (num1 - num2) << std::endl;
    }

    void mul() const {
        std::cout << "Result: " << (num1 * num2) << std::endl;
    }

    void div() const {
        if (num2 == 0) {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return;
        }
        std::cout << "Result: " << (num1 / num2) << std::endl;
    }
};

#endif