#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <vector>
#include <iostream>

class Basic {
private:
    std::vector<int> nums;

public:
    void input() {
        int n;
        nums.clear();

        std::cout << "Enter numbers (-1 to stop): ";
        while (true) {
            std::cin >> n;
            if (n == -1)
                break;
            nums.push_back(n);
        }
    }

    void add() {
        int sum = 0;

        for (int i : nums) {
            sum += i;
        }

        std::cout << "Sum = " << sum << std::endl;
    }

    void sub(){
        int sub =0;
        for ( auto i : nums){
            sub -=i;
        }
        std::cout<<"Subtraction = "<< -(sub)<<std::endl;
    };
    void mul(){
        double multiplication = 1;
        for(auto i : nums){
            multiplication*=i;

        }
        std::cout<<"Multiplication = "<< multiplication<< std::endl;
    };
    void div(){
        double div = 1;
        for(auto i : nums){
            div /=i;
        }
        std::cout<<"div = "<< div<< std::endl;
    };
};

#endif