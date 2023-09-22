#include <iostream>

using namespace std;

int main() {

    //a

    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "i verdi er: " << i <<endl;
    cout << "j verdi er: " << j << endl;
    cout << "j adresse er: " << &i << endl;
    cout << "j adresse er: " << &j << endl;
    cout << "-----------------------------------" << endl;
    cout << "verdien p peker til er: " << *p <<endl;
    cout << "verdien q peker til er: " << *q <<endl;
    cout << "p addresse er: " << p << endl;
    cout << "q addresse er: " << q << endl;
    cout << "-----------------------------------" << endl;

    //b

    *p = 7; // Verdi blir 7
    *q += 4; // nye verdien til j blir 9
    *q = *p + 1; // j blir i + 1 som er 7 + 1 som blir 8
    p = q; // adressa til p blir det samme som q, som gjør at p også peiker til j
    cout << *p << " " << *q << endl; // begge printer ut verdien som ligger i addressa til j som er 9
    cout << p << " " << q << endl; // begge printer ut samme addresse som peiker til j.
}
