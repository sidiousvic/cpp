//
//  main.cpp
//  1.13
//
//  Created by VIC SIDIOUS on 2020/01/05.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.13: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

#include <iostream>
using namespace std;

int main() {
    // from exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.
    cout << "Exercise 1.9" << endl << "⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬" << endl;
    int sum = 0;
    for (int i = 50; i <= 100; i++) {
        sum += i;
    }
    cout << "The sum of 50 to 100 inclusive is " << sum << endl << endl;

    // from exercise 1.10: Use the decrement operator (--) to write a program that prints the numbers from ten down to zero.
    cout << "Exercise 1.10" << endl << "⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬" << endl;
    for(int i = 10; i >= 1; i--) {
        cout << i << endl;
    }
    
    cout << endl;
    
    // from exercise 1.11: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.
    cout << "Exercise 1.11" << endl << "⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬⌬" << endl;
    int v1 = 0, v2 = 0;
    cout << "Please input two integers." << endl;
    cin >> v1 >> v2;
    cout << "Your output is:" << endl;
    if (v1 > v2) {
        for(int i = v1; i >= v2; i--) {
            cout << i << " ";
        }
    } else {
        for(int i = v1; i <= v2; i++) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
    
}
