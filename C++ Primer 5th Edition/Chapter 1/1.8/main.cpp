//
//  main.cpp
//  1.8
//
//  Created by VIC SIDIOUS on 2020/01/04.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.8: Indicate which, if any, of the following output statements are
//legal:
//std::cout << "/*";
//std::cout << "*/";
//std::cout << /* "*/" */;
//std::cout << /* "*/" /* "/*" */;
//After you’ve predicted what will happen, test your answers by compiling a
//program with each of these statements. Correct any errors you encounter.



#include <iostream>

int main() {
    std::cout << "/*" << std::endl; // legal
    std::cout << "*/" << std::endl; // legal
//    std::cout << /* "*/" */ << std::endl; // illegal
//    std::cout << /* "*/" /* "/*" */ << std::endl; // illegal
    return 0;
}
