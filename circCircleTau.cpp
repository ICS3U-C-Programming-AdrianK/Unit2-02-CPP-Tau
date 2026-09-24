// copyright(c) 2021  Ms Raffin all rights reserved.
//
// Date: 23th sep 2026
// This program asks user for radius and then
// calculates the circumference of a circle 
// using TAU
#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // get the radius from the user.
    std::cout << "Enter the radius (mm):";
    std::cin >> radius;

    // calculate the circumference using TAU
    circumference = TAU * radius;

    // Display the circumference
    std::cout << "\n";
    std::cout << "circumference= " << circumference << "mm" << std::endl;
}
