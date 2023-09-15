/**
 * @author Ole Kristian Dvergsdal
 * @version 21-08-2023
 *
 * Innlevering for emne INFT2503 C++
 * Oppgåve a)
 * Eit program som tar inn tempraturer ifrå terminalen og printer tilbake antall tempraturer.
 */

#include <iostream>

using namespace std;

/**
 * Starter programet
 * @return 0;
 */
int main() {
    const int length = 5;
    double temperature [length];

    cout << "Du skal srkive inn 5 temperaturer." << endl;

    for(int i = 0; i < length; i++) {
        cout << "Temperatur nr " << i + 1 << ": " << endl;
        cin >> temperature[i];
    }

    int below10 = 0;
    int between10And20 = 0;
    int abowe10 = 0;

    for(int j = 0; j < length; j++) {
        if(temperature[j] < 10) {
            below10++;
        }
        else if (temperature[j] >= 10 && temperature[j] <= 20) {
            between10And20++;
        }
        else {
            abowe10++;
        }
    }
    cout << "Antall under 10 er " << below10 << endl;
    cout << "Antall mellom 10 og 20 er " << between10And20 << endl;
    cout << "Antall over 20 er " << abowe10 << endl;
    return 0;
}
