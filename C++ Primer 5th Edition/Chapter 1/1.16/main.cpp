//
//  main.cpp
//  1.16
//
//  Created by VIC SIDIOUS on 2020/01/06.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//

#include <iostream>

int main() {
    int value = 0, sum = 0;
    std::cout << "Enter values to sum. When finished, press COMMAND + D then ENTER" << std::endl;
    while(std::cin >> value) {
        sum += value;
    };
    std::cout << "The total is: " << sum << std::endl;
    return 0;
}
