//
//  main.cpp
//  1.11
//
//  Created by VIC SIDIOUS on 2020/01/04.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.11: Write a program that prompts the user for two integers.
//Print each number in the range specified by those two integers

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
