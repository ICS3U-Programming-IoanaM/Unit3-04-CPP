// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu
//
// Date: Oct. 13, 2022
// tell you if a number is positive, negative, or null

#include <iostream>


int main() {
    // variables
    int userNum;

    // gets user input
    std::cout << "Enter any number: ";
    std::cin >> userNum;

    // checks if number is 0
    if (userNum == 0) {
        std::cout << "0 is a null number.\n";

    // checks if number is negative
    } else if (userNum < 0) {
        std::cout << userNum << " is a negative number.\n";

    // number is positive
    } else {
        std::cout << userNum << " is a positive number.\n";
    }
}
