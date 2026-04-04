#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

class Calculator {
private:
    double num1;
    double num2;
    double result;
    bool validInput;

public:
    Calculator() : num1(0), num2(0), result(0), validInput(true) {}

    // Input handler with validation
    bool inputNumbers() {
        std::cout << "\nEnter first number: ";
        if (!(std::cin >> num1)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input! Please enter a valid number.\n";
            return false;
        }

        std::cout << "Enter second number: ";
        if (!(std::cin >> num2)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input! Please enter a valid number.\n";
            return false;
        }
        return true;
    }

    // Single number input
    bool inputSingleNumber(const std::string& prompt) {
        std::cout << prompt;
        if (!(std::cin >> num1)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input! Please enter a valid number.\n";
            return false;
        }
        return true;
    }

    // Basic operations
    double add() {
        result = num1 + num2;
        return result;
    }

    double subtract() {
        result = num1 - num2;
        return result;
    }

    double multiply() {
        result = num1 * num2;
        return result;
    }

    double divide() {
        if (num2 == 0) {
            std::cout << "Error: Division by zero!\n";
            validInput = false;
            return 0;
        }
        result = num1 / num2;
        return result;
    }

    double modulo() {
        if (num2 == 0) {
            std::cout << "Error: Modulo by zero!\n";
            validInput = false;
            return 0;
        }
        result = static_cast<int>(num1) % static_cast<int>(num2);
        return result;
    }

    // Advanced operations
    double power() {
        result = std::pow(num1, num2);
        return result;
    }

    double squareRoot() {
        if (num1 < 0) {
            std::cout << "Error: Cannot calculate square root of negative number!\n";
            validInput = false;
            return 0;
        }
        result = std::sqrt(num1);
        return result;
    }

    double percentage() {
        result = (num1 * num2) / 100;
        return result;
    }

    double absolute() {
        result = std::abs(num1);
        return result;
    }

    double sine() {
        result = std::sin(num1);
        return result;
    }

    double cosine() {
        result = std::cos(num1);
        return result;
    }

    double tangent() {
        result = std::tan(num1);
        return result;
    }

    // Display result with formatting
    void displayResult() const {
        std::cout << std::fixed << std::setprecision(6);
        std::cout << "Result: " << result << std::endl;
    }

    // Check if last input was valid
    bool isValid() const {
        return validInput;
    }

    // Reset validation flag
    void resetValidation() {
        validInput = true;
    }

    // Get result
    double getResult() const {
        return result;
    }

    // Set result for continuous calculation
    void setResult(double r) {
        num1 = r;
    }
};

#endif