//
//  main.cpp
//  2.2
//
//  Created by VIC SIDIOUS on 2020/01/17.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 2.2: To calculate a mortgage payment, what types would you use
//for the rate, principal, and payment? Explain why you selected each type.

#include <iostream>

int main() {
    // insert code here...
    std::cout << "For the interest rate, I would use a double. It affords me greater precision than a float, and is faster to calculate in some machines attuned for heavier mathematical computation, so the performance difference is negligible.\n";
    std::cout << std::endl;
    std::cout << "A double again, because when representing money we often deal with decimals (e.g. $1314.48) and the range is big enough for most cases.\n";
    std::cout << std::endl;
    std::cout << "Same reasoning for the payment; I would use a double.\n";
}
