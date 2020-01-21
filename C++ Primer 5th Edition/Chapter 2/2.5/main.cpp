//
//  main.cpp
//  2.5
//
//  Created by VIC SIDIOUS on 2020/01/21.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 2.5: Determine the type of each of the following literals. Explain
//the differences among the literals in each of the four examples:
//(a) 'a', L'a', "a", L"a"
//(b) 10, 10u, 10L, 10uL, 012, 0xC
//(c) 3.14, 3.14f, 3.14L
//(d) 10, 10u, 10., 10e-2

#include <iostream>

int main() {
    // (a)
    'a';   // character literal, type is `char`
    L'a';  // wide character literal, type is `wchar_t`
    "a";   // character string literal
    L"a";  // wide character string literal
    
    // (b)
    10;    // integer literal, type is `int`
    10u;   // unsigned integer literal, type is `unsigned int`
    10L;   // integer literal, type is `long int`
    10uL;  // unsigned integer literal, type is `unsigned long int`
    012;   // octal integer literal, type is `int`
    0xC;   // hexadecimal integer literal, type is `int`
    
    // (c)
    3.14;   // floating-point literal, type is `double`
    3.14f;  // floating-point literal, type is `float`
    3.14L;  // floating-point literal, type is `long double`
    
    // (d)
    10;     // integer literal, type is `int`
    10u;    // unsigned integer literal, type is `unsigned int`
    10.;    // floating-point literal, type is `double`
    10e-2;  // floating-point literal, type is `double`
    
    return 0;
}
