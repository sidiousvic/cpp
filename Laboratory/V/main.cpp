//
//  main.cpp
//  V
//
//  Created by VIC SIDIOUS on 2020/01/09.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int height  = 20;
    int width = 40;
    for(int y = 0; y <= height; y ++) {
        cout << "\n";
        for(int x = 0; x <= width; x++) {
            // borders
            if (y == 0 || y == height) cout << "⌰";
            else if (x == 0 || x == width) cout << "⌰";
            // v
            else if (y - x == x - y) cout << "↯";
            else if (x + y == width) cout << "↯";
            // fill
            else cout << "⌄";
        }
    }
    cout << "\n";
    return 0;
}
