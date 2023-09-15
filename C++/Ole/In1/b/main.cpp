/**
 * @author Ole Kristian Dvergsdal
 * @version 21-08-2023
 *
 * Innelvering for emne INFT2503 C++
 * Oppgåve b)
 * Eit program som tar inn tempraturer ifrå fil og printer tilbake antall temparturer sotert.
 */

#include <iostream>
#include <fstream>

using namespace std;

void read_temperatures(double temperatures[], int length);

int main() {
    const int length = 5;
    double temperatures[length];
    read_temperatures(temperatures, length);
    return 0;
}

void read_temperatures(double temperatures[], int length) {
    const char filename[] = "../temperaturer.dat";
    ifstream file;
    file.open(filename);

    if(!file) {
        cout <<"Feil ved opning av fil" << endl;
        exit(EXIT_FAILURE);
    }

    int i;
    int count = 0;
    while (file >> i && count < length) {
        temperatures[count] = i;
        count++;
    }

    file.close();

    int below10 = 0;
    int between10And20 = 0;
    int abowe10 = 0;

    for(int j = 0; j < length; j++) {
        if(temperatures[j] < 10) {
            below10++;
        }
        else if (temperatures[j] >= 10 && temperatures[j] <= 20) {
            between10And20++;
        }
        else {
            abowe10++;
        }
    }
    cout << "Antall under 10 er " << below10 << endl;
    cout << "Antall mellom 10 og 20 er " << between10And20 << endl;
    cout << "Antall over 20 er " << abowe10 << endl;
}