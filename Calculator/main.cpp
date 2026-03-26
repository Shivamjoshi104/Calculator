#include <iostream>
#include "calculator.h"

int main() {
    Basic b;
    int choice;
    do {
        std::cout << "\n----- MENU -----\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch(choice) {

            case 1:
                b.input();
                b.add();
                break;
            case 2:
                b.input();
                b.sub();
                break;
            case 3:
                b.input();
                b.mul();
                break;
            case 4:
                b.input();
                b.div();
                break;        
            case 5:
                std::cout << "Exiting...\n";
                break;

            default:
                std::cout << "Invalid choice!\n";
        }

    } while(choice != 5);
    
    int storenumber(int num){
        int x= num;
    }
    int storeOperator(char operator){
        char x = operator;
    }

    return 0;
}