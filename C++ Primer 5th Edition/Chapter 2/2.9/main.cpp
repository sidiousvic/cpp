//
//  main.cpp
//  2.9
//
//  Created by VIC SIDIOUS on 2020/01/23.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 2.9: Explain the following definitions. For those that are illegal,
//explain what’s wrong and how to correct it.
//(a) std::cin >> int input_value;
//(b) int i = { 3.14 };
//(c) double salary = wage = 9999.99;
//(d) int i = 3.14;

#include <iostream>

int main() {
    // std::cin >> int input_value is invalid, the variable must be defined before slingin' it in input
    // fix:
    int input_value = 9;
    std::cout << "Enter a value..." << std::endl;
    std::cin >> input_value;
    std::cout << "Value entered was " << input_value << std::endl;
    // int x = { 3.14 } will throw an error, list initialization does not allow for narrowed values
    // fix:
    double pi = { 3.14 };
    std::cout << "π is " << pi << std::endl;
    // double salary = wage = 9999.99 throws an error, wage is not defined
    // fix:
    double salary, wage;
    salary = wage = 9999.99;
    int i = 9.99; // this is OK, but will truncate to 9
    std::cout << i << std::endl;
    return 0;
}
