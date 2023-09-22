#include <iostream>

using namespace std;

int main() {
    double number;
    double *pointer;
    double &ref = number;

    pointer = &number;

    *pointer = 5; //metode 1
    cout << number <<endl;
    cout << "----------------" <<endl;

    number = 3; // metode 2
    cout << number <<endl;
    cout << "----------------" <<endl;

    ref = 8; // metode 3
    cout << number <<endl;
    cout << "----------------" <<endl;
}