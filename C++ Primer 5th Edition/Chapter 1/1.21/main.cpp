//
//  main.cpp
//  1.21
//
//  Created by VIC SIDIOUS on 2020/01/11.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.21: Write a program that reads two Sales_item objects that
//have the same ISBN and produces their sum.

#include <iostream>
#include "Sales_item.h"

int main() {
    std::cout << "Input two items." << std::endl;
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << "Thank you. Processing..." << std::endl << std::endl;
    if(item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl << std::endl;
        return 0;
    }
    else {
        std::cout << "ERROR: Items must have the same ISBN." << std::endl << std::endl;
        return -1;
    }
    return 0;
}
