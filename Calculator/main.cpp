#include <iostream>
#include "calculator.h"

void displayMenu() {
    std::cout << "\n";
    std::cout << "╔════════════════════════════════════╗\n";
    std::cout << "║           CALCULATOR MENU          ║\n";
    std::cout << "╚════════════════════════════════════╝\n";
    std::cout << "Basic Operations:\n";
    std::cout << "  1. Addition (+)\n";
    std::cout << "  2. Subtraction (-)\n";
    std::cout << "  3. Multiplication (*)\n";
    std::cout << "  4. Division (/)\n";
    std::cout << "  5. Modulo (%)\n";
    std::cout << "\nAdvanced Operations:\n";
    std::cout << "  6. Power (^)\n";
    std::cout << "  7. Square Root (√)\n";
    std::cout << "  8. Percentage\n";
    std::cout << "  9. Absolute Value\n";
    std::cout << "  10. Sine (trigonometric)\n";
    std::cout << "  11. Cosine (trigonometric)\n";
    std::cout << "  12. Tangent (trigonometric)\n";
    std::cout << "\n  0. Exit\n";
    std::cout << "─────────────────────────────────────\n";
    std::cout << "Enter your choice: ";
}

int main() {
    Calculator calc;
    int choice;
    bool continueCalc = true;

    std::cout << "\n╔════════════════════════════════════╗\n";
    std::cout << "║      WELCOME TO CALCULATOR         ║\n";
    std::cout << "║     Advanced Calculator App        ║\n";
    std::cout << "╚════════════════════════════════════╝\n";

    while (true) {
        displayMenu();
        std::cin >> choice;

        if (choice == 0) {
            std::cout << "\nThank you for using Calculator!\n";
            std::cout << "Goodbye!\n\n";
            break;
        }

        calc.resetValidation();

        switch (choice) {
            case 1: {
                if (calc.inputNumbers()) {
                    double result = calc.add();
                    std::cout << "\n" << calc.getResult() << " + " << calc.getResult() - calc.getResult() << " = ";
                    calc.displayResult();
                }
                break;
            }
            case 2: {
                if (calc.inputNumbers()) {
                    calc.subtract();
                    calc.displayResult();
                }
                break;
            }
            case 3: {
                if (calc.inputNumbers()) {
                    calc.multiply();
                    calc.displayResult();
                }
                break;
            }
            case 4: {
                if (calc.inputNumbers()) {
                    calc.divide();
                    if (calc.isValid()) {
                        calc.displayResult();
                    }
                }
                break;
            }
            case 5: {
                if (calc.inputNumbers()) {
                    calc.modulo();
                    calc.displayResult();
                }
                break;
            }
            case 6: {
                if (calc.inputNumbers()) {
                    calc.power();
                    calc.displayResult();
                }
                break;
            }
            case 7: {
                if (calc.inputSingleNumber("\nEnter a number: ")) {
                    calc.squareRoot();
                    if (calc.isValid()) {
                        calc.displayResult();
                    }
                }
                break;
            }
            case 8: {
                if (calc.inputNumbers()) {
                    calc.percentage();
                    calc.displayResult();
                }
                break;
            }
            case 9: {
                if (calc.inputSingleNumber("\nEnter a number: ")) {
                    calc.absolute();
                    calc.displayResult();
                }
                break;
            }
            case 10: {
                if (calc.inputSingleNumber("\nEnter angle in radians: ")) {
                    calc.sine();
                    calc.displayResult();
                }
                break;
            }
            case 11: {
                if (calc.inputSingleNumber("\nEnter angle in radians: ")) {
                    calc.cosine();
                    calc.displayResult();
                }
                break;
            }
            case 12: {
                if (calc.inputSingleNumber("\nEnter angle in radians: ")) {
                    calc.tangent();
                    calc.displayResult();
                }
                break;
            }
            default:
                std::cout << "\n❌ Invalid choice! Please select a valid option.\n";
        }

        char continueChoice;
        std::cout << "\nDo you want to continue? (y/n): ";
        std::cin >> continueChoice;

        if (continueChoice != 'y' && continueChoice != 'Y') {
            std::cout << "\nThank you for using Calculator!\n";
            std::cout << "Goodbye!\n\n";
            break;
        }
    }

    return 0;
}