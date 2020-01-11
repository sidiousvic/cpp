//
//  main.cpp
//  1.20
//
//  Created by VIC SIDIOUS on 2020/01/11.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.20: http://www.informit.com/title/032174113 contains a copy of
//Sales_item.h in the Chapter 1 code directory. Copy that file to your
//working directory. Use it to write a program that reads a set of book sales
//transactions, writing each transaction to the standard output.

#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2, item3;
    std::cin >> item1 >> item2 >> item3;
    std::cout << item1 + item2 + item3 << std::endl;
    return 0;
}

