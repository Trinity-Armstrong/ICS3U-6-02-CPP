// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: December 2019
// This program identifies the largest of 10 random numbers

#include <iostream>
#include <array>
#include <fstream>


template<size_t N>
int identify(std::array<int, N> arrayOfNumbers) {
    // This function identifies the largest number in a list
    int largestNumber = 0;

    // process
    for (int counter = 0; counter < arrayOfNumbers.size(); counter++) {
        if (largestNumber < arrayOfNumbers[counter]) {
        largestNumber = arrayOfNumbers[counter]; }
    }
    return largestNumber;
}

main() {
    // This function generates 10 random numbers and prints the largest

    // Variables and array declaration
    std::array<int, 10> randomNumbers;
    int largest;
    int number;

    // Seed
    unsigned int seed = time(NULL);

    // process
    for (int counter = 0; counter < 10; counter++) {
        number = rand_r(&seed) % 100 + 1;
        std::cout << number << std::endl;
        randomNumbers[counter] = number; }

    // call function
    largest = identify(randomNumbers);

    // output
    std::cout << std::endl;
    std::cout << "The largest number from this list is "
              << largest << std::endl;
}
