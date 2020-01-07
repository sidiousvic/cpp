//
//  main.cpp
//  1.17
//
//  Created by VIC SIDIOUS on 2020/01/07.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.17: What happens in the program presented in this section if the
//input values are all equal? What if there are no duplicated values?

// If values are all equal, nothing will happen—because we are only printing something if the current value is not the same.
// If there are no duplicated values, the values are printed as all having occurred 1 time.

#include <iostream>
int main()
{
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal) {
        int cnt = 1; // store the count for the current value we're processing
        while (std::cin >> val) { // read the remaining numbers
            if (val == currVal) // if the values are the same
                ++cnt; // add 1 to cnt
            else { // otherwise, print the count for the previous value
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val; // remember the new value
                cnt = 1; // reset the counter
            }
        } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    } // outermost if statement ends here
    return 0;
}
