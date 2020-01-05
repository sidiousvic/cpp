//
//  main.cpp
//  1.6
//
//  Created by VIC SIDIOUS on 2020/01/01.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.6: Explain whether the following program fragment is legal.


#include <iostream>

int main(int argc, const char * argv[]) {
    int v1 = 6, v2 = 3;
    std::cout << "The sum of " << v1;
    
/* The following program fragment is illegal because we are not storing the right hand values anywhere.
 
    << " and " << v2;
    << " is " << v1 + v2 << std::endl;
 
To fix it, we need to either chain them to line 13 or store them in one std::cout per line, as follows: */
    
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    return 0;
}


