//
//  main.cpp
//  1.12
//
//  Created by VIC SIDIOUS on 2020/01/04.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.12: What does the following for loop do? What is the final value
//of sum?
//int sum = 0;
//for (int i = -100; i <= 100; ++i)
//sum += i;

// Answer:
// int i is initialized as -100
// program checks if i <= is true
// if true, i is incremented by 1 every iteration

#include <iostream>

int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
        std::cout << sum << std::endl;
    }
    std::cout << "The final value of sum is " << sum << std::endl;
    return 0;
}
