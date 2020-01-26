//
//  main.cpp
//  2.13
//
//  Created by VIC SIDIOUS on 2020/01/26.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 2.13: What is the value of j in the following program?

#include <iostream>

int i = 42;
int main()
{
    int i = 100; int j = i; // value of i in this scope is 100, and assigned to j
    std::cout << j; // 100
}
