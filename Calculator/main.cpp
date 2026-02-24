#include <iostream>
#include "calculator.h"

int main() {
    Basic b;
    int choice;

    do {
        std::cout << "\n----- MENU -----\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch(choice) {

            case 1:
                b.input();
                b.add();
                break;

            case 2:
                std::cout << "Exiting...\n";
                break;

            default:
                std::cout << "Invalid choice!\n";
        }

    } while(choice != 2);

    return 0;
}