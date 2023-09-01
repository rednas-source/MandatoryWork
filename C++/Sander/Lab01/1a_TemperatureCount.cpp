
#include <iostream>

int main() {
    const int period = 5;  // The length of the period as a constant
    double temperature;
    int countUnder10 = 0, countBetween10And20 = 0, countOver20 = 0;

    std::cout << "Du skal skrive in " << period << " temperaturer" << std::endl;

    for (int i = 1; i <= period; ++i) {
        std::cout << "Temperatur nr " << i << ": ";
        std::cin >> temperature;

        if (temperature < 10) {
            countUnder10++;
        } else if (temperature >= 10 && temperature <= 20) {
            countBetween10And20++;
        } else {
            countOver20++;
        }
    }

    std::cout << "Antall under 10 er " << countUnder10 << std::endl;
    std::cout << "Antall mellom 10 og 20 er " << countBetween10And20 << std::endl;
    std::cout << "Antall over 20 er  " << countOver20 << std::endl;

    return 0;
}
