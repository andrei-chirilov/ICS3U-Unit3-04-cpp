// Copyright (c) 2019 Andrei Chirilov all rights reserved
//
// Created by: Andrei Chirilov
// Created on: October 2019
// This program does if, else if, else, and endif statements

#include <iostream>

int main() {
    int integer;

    std::cout << "Enter integer: ";
    std::cin >> integer;
    std::cout << "" << std::endl;


    if (integer > 0) {
        std::cout << "+";
    } else if (integer < 0) {
        std::cout << "-";
    } else if (integer == 0) {
        std::cout << "0";
    } else {
        std::cout << "No idea";
    }
}
