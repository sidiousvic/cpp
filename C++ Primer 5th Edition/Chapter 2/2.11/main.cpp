//
//  main.cpp
//  2.11
//
//  Created by VIC SIDIOUS on 2020/01/23.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//

#include <iostream>

extern int ix = 1024;  // definition, value is 1024
int iy;  // declaration + definition, implicit 0
extern int iz;  // declaration, used extern
int main() {
//    extern int ix2 = 1024;  // this will give an error
    int iy2;  // defintiion
    extern int iz2;  // Declaration
    std::cout << ix;
    return 0;
}
