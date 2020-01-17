//
//  main.cpp
//  2.1
//
//  Created by VIC SIDIOUS on 2020/01/17.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 2.1: What are the differences between int, long, long long,
//and short? Between an unsigned and a signed type? Between a float and
//a double?

#include <iostream>

int main() {
    // insert code here...
    std::cout << "Short, int, long and long long, are types that use, in that order, increasing amounts of storage in memory. They also have varying ranges of values that they can represent. The actual size of each is determined by the operating system. Short is usually 2 bytes, long is 4, and int is either 2 of 4 depending if it is 16 or 32 bit.\n";
    std::cout << std::endl;
    std::cout << "Signed types can represent negative or positive numbers. Unsigned types can only represent values equal to or higher than zero.\n";
    std::cout << std::endl;
    std::cout << "A float is generally represented in 32 bits, while doubles in 64. Long double are represented in either 3 or 4 words (96 or 128 bits).\n";
}
