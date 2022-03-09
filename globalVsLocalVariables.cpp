// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-03-08
// This is a program that shows the difference between
// local and global variables

#include <iostream>

// global variable
int variableX = 25;


void localVariable() {
    // this shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: "
    << variableX << "+" << variableY << "=" << variableZ << std::endl;
}


void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Global variableX, variableY, variableZ: "
    << variableX << "+" << variableY << "=" << variableZ << std::endl;
}


int main() {
    // this function shows local and global to the user

    localVariable();
    globalVariable();
    std::cout << "\nDone." << std::endl;
}
