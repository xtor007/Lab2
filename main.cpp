//
//  main.cpp
//  lab2
//
//  Created by Anatoliy Khramchenko on 10/28/20.
//  Copyright © 2020 Anatoliy Khramchenko. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x, y, Res; // x,y - coordinates, Res - result
    cout << "enter coordinates"
    cin >> x >> y;
    if (y>=0) {
        if (x>=0) {
            Res = 1;
        } else {
            Res = 2;
        }
    } else {
        if (x>=0) {
            Res = 4;
        } else {
            Res = 3;
        }
    }
    cout << "The point lies in " << Res << ""quadrant";
}
