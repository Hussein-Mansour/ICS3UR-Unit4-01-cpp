// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Mon/May10/2021
// This program while loop program

#include <iostream>

int main() {
    // this function add all the whole numbers up to user input positive number
    int positiveInteger;
    int loopCounter = 1;
    int sumNumber = 0;

    // input
    std::cout << "enter a positive integer:";
    std::cin >> positiveInteger;

    // process & output
    while (loopCounter <= positiveInteger) {
        sumNumber = sumNumber + loopCounter;
        loopCounter = loopCounter + 1;
    }
std::cout << "The sum of all positive numbers from 1 to "
<< positiveInteger << " is " << sumNumber << std::endl;
std::cout << "\n\nDone." << std::endl;
}
