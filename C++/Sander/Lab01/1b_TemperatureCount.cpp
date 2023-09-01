
#include <iostream>
#include <fstream>

// Function Prototype
void readTemperaturesFromFile(const char *filename, double temperatures[], int size);

int main() {
    const int period = 5;  // The length of the period as a constant
    double temperatures[period];
    int countUnder10 = 0, countBetween10And20 = 0, countOver20 = 0;

    readTemperaturesFromFile("temperatures.txt", temperatures, period);

    for (int i = 0; i < period; ++i) {
        double temperature = temperatures[i];

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
    std::cout << "Antall over 20 er " << countOver20 << std::endl;

    return 0;
}

// Function Definition
void readTemperaturesFromFile(const char *filename, double temperatures[], int size) {
    std::ifstream inFile(filename);

    if (!inFile) {
        std::cerr << "Unable to open file " << filename << std::endl;
        exit(1);
    }

    for (int i = 0; i < size && inFile >> temperatures[i]; ++i);

    inFile.close();
}
