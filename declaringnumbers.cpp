// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: December 2020
// This program checks if a number is positive, negative, or neither

#include <iostream>
#include <cmath>


int main() {
    // this function checks if the number is positive, negative, or 0
    int chosen_number;

    // input
    std::cout << "Enter the number you have chosen: ";
    std::cin >> chosen_number;
    std::cout << "" << std::endl;

    // process
    if (chosen_number > 0) {
        // output
        std::cout << "The number is positive";
    } else if (chosen_number < 0) {
        // output
        std::cout << "The number is negative";
    } else {
        // output
        std::cout << "This number is a 0";
    }
}
