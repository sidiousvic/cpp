//
//  main.cpp
//  2.7
//
//  Created by VIC SIDIOUS on 2020/01/21.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 2.7: What values do these literals represent? What type does each
//have?
//(a) "Who goes with F\145rgus?\012"
//(b) 3.14e1L
//(c) 1024f
//(d) 3.14L

#include <iostream>

int main() {
    "Who goes with F\145rgus?\012";  // string literal, octal escape sequences
    3.14e1L;  // floating-point literal, type is `long double`
    1024f;  // floating-point literal, type is `float`
    3.14L;  // floating-point literal, type is `long double`
    return 0;
}
