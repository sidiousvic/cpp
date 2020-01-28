//
//  main.cpp
//  2.14
//
//  Created by VIC SIDIOUS on 2020/01/28.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 2.14: Is the following program legal? If so, what values are printed?

#include <iostream>

int main() {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl; // i: 100 sum: 45
    return 0;
}
