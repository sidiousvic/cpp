//
//  main.cpp
//  1.15
//
//  Created by VIC SIDIOUS on 2020/01/06.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.15: Write programs that contain the common errors discussed in
//the box on page 16. Familiarize yourself with the messages the compiler
//generates

#include <iostream>

// error: missing ) in parameter list for main
int one ( {
    // error: used colon, not a semicolon, after endl
    std::cout << "Read each file." << std::endl:
    // error: missing quotes around string literal
    std::cout << Update master. << std::endl;
    // error: second output operator is missing
    std::cout << "Write new master." std::endl;
    // error: missing ; on return statement
    return 0
}

int two() {
    int v1 = 0, v2 = 0;
    std::cin >> v >> v2; // error: uses "v" not "v1"
    // error: cout not defined; should be std::cout
    cout << v1 + v2 << std::endl; return 0;
}
