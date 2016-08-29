//
//  main.cpp
//  Book Exercise 2.15
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Area of a hexagon
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Calculate Area of a Hexagon \n";
    
    // D
    double s = 0.0;
    double area_calc = 0.0;
    
    // I
    cout << "Enter the side: ";
    cin >> s;
    
    // P
    
    area_calc = ((3 * pow(3, 0.5)) / 2) * pow(s, 2.0);
    
    // O
    cout << "The area of the hexagon is " << area_calc << endl;
    
    return 0;
    
}