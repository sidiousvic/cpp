//
//  main.cpp
//  2.12
//
//  Created by VIC SIDIOUS on 2020/01/25.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercises Section 2.2.3
//Exercise 2.12: Which, if any, of the following names are invalid?
//(a) int double = 3.14;
//(b) int _;
//(c) int catch-22;
//(d) int 1_or_2 = 1;
//(e) double Double = 3.14;

#include <iostream>

int main() {
    int double = 3.14; // invalid, double is a reserved word
    int _; // valid
    int catch-22; // invalid, catch is a reserved word, hyphen is forbidden
    int 1_or_2 = 1; // invalid, cannot start with number
    double Double = 3.14; // valid, capitalizatin means no conflict with reserved keyword
    
    return 0;
}
