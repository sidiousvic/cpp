//
//  main.cpp
//  bolt
//
//  Created by VIC SIDIOUS on 2020/01/01.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int height  = 20;
    int width = 20;
    for(int y = 0; y <= height; y ++) {
        cout << "\n";
        for(int x = 0; x <= width; x++) {
            // borders
            if (y == 0 || y == height) cout << "🚧";
            else if (x == 0 || x == width) cout << "🚧";
            // bolt
            else if (x + y == width / 2) cout << "⚡️";
            else if (y == height / 2) cout << "⚡️";
            else if (y >= height / 2 && x + (y - height / 2) == width) cout << "⚡️";
            else cout << "⛓";
        }
    }
    cout << "\n";
    return 0;
}
