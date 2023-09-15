//
// Created by Oledo on 06.09.2023.
//
#include <iostream>

using namespace std;

int main() {
    double number;
    double *pointer;
    double &ref = number;

    pointer = &number;

    *pointer = 5; //måte 1
    cout << number <<endl;
    cout << "----------------" <<endl;

    number = 3; // måte 2
    cout << number <<endl;
    cout << "----------------" <<endl;

    ref = 8; // måte 3
    cout << number <<endl;
    cout << "----------------" <<endl;
}