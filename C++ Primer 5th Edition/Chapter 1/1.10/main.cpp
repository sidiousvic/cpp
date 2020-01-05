//
//  main.cpp
//  1.10
//
//  Created by VIC SIDIOUS on 2020/01/04.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
//there is a decrement operator (--) that subtracts 1. Use the decrement
//operator to write a while that prints the numbers from ten down to zero.

#include <iostream>

int main() {
    int val = 10;
    while(val >= 1) {
        std::cout << val << std::endl;
        val--;
    }
    return 0;
}
