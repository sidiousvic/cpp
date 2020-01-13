//
//  main.cpp
//  1.23
//
//  Created by VIC SIDIOUS on 2020/01/12.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.23: Write a program that reads several transactions and counts
//how many transactions occur for each ISBN.

#include <iostream>
#include <map>
#include "Sales_item.h"

int main() {
    Sales_item item;
    std::map<std::string, int> itemMap;
    while(std::cin >> item) {
        if(!itemMap[item.isbn()]) {
            itemMap[item.isbn()] = 1;
        } else {
            itemMap[item.isbn()]++;
        }
    }
    
    std::cout << "\nThe totals are:\n";
    
    for (auto const& x : itemMap) {
        std::cout << x.first // key
        << ':'
        << x.second // value
        << std::endl;
    }
    
    std::cout << std::endl;
    
    return 0;
}



//0-201-78345-X 9 20.00
//0-201-74345-X 3 20.00
//0-201-74345-X 2 25.00
//0-201-74445-X 2 25.00
//0-201-74445-X 2 25.00
