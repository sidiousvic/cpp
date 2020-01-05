//
//  main.cpp
//  1.9
//
//  Created by VIC SIDIOUS on 2020/01/04.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.9: Write a program that uses a while to sum the numbers from
//50 to 100.

#include <iostream>

int main() {
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        val++;
    }
    std::cout << "The sum of 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}
