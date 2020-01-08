//
//  main.cpp
//  1.19
//
//  Created by VIC SIDIOUS on 2020/01/08.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p.13) that printed a range of numbers so that it handles input in which the first number is smaller than the second.

// Note: Had already done so in 1.11, so this is a copy

#include <iostream>

int main() {
    
    int v1 = 0, v2 = 0;
    std::cout << "Please input two integers." << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "Your output is:" << std::endl;
    int v = v1;
    if (v1 > v2) {
        while(v >= v2) {
            std::cout << v << " ";
            v--;
        }
    } else {
        while(v <= v2) {
            std::cout << v << " ";
            v++;
        }
    }
    
    std::cout << std::endl;
    
    return 0;
}
