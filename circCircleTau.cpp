// Copyright (c) 2022 Mr. Riscalas All rights reserved
//
// Created By: Nicolas Riscalas
// Created On 03, 9, 2022
// Calculate the area and perimeter of a circle

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;


const float TAU = M_PI * 2;

int main() {
    float radius, area, perimeter;
    cout << "Enter radius of circle\n";
    cin >> radius;
    // Area of Circle = PI x Radius X Radius
    perimeter = TAU * radius;
    cout << "\nPerimeter of circle : " << perimeter;

    return 0;
}
