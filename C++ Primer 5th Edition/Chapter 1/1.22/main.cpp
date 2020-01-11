//
//  main.cpp
//  1.22
//
//  Created by VIC SIDIOUS on 2020/01/11.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.22: Write a program that reads several transactions for the same
//ISBN. Write the sum of all the transactions that were read.

#include <iostream>
#include "Sales_item.h"

int main() {
    std::cout << "Enter transactions.\n\n";
    Sales_item item1, item2, item3;
    std::cin >> item1 >> item2 >> item3;
    if(item1.isbn() == item2.isbn() && item1.isbn() == item3.isbn()) {
        std::cout << "\nThe total sum is:\n";
        std::cout << item1 + item2 + item3 << std::endl;
        std::cout << "\n";
    }
    else {
        std::cout << "\n";
        std::cout << "ISBN do not match." << std::endl;
        std::cout << "\n";
        return -1;
    }
    
    return 0;
}
