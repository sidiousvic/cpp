//
//  main.cpp
//  1.4
//
//  Created by VIC SIDIOUS on 2020/01/01.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.4: Our program used the addition operator, +, to add two
//numbers. Write a program that uses the multiplication operator, *, to print
//the product instead.

#include <iostream>
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 + v2;
    std::cout << std::endl;
    return 0;
}
