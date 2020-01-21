//
//  main.cpp
//  2.6
//
//  Created by VIC SIDIOUS on 2020/01/21.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 2.6: What, if any, are the differences between the following
//definitions:
//int month = 9, day = 7;
//int month = 09, day = 07;

#include <iostream>

int main() {
    int month = 9, day = 7;      // Both month and day are of type int
    int month1 = 09, day1 = 07;  // Error: the digit of octal integral literal should in range 0~7
    
    return 0;
}
