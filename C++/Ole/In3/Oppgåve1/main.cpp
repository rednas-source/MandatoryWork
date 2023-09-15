#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<double> numbers;
    double numberFound;

    for(int i = 0; i < 5; i++) {
        numbers.push_back(i + 1);
    }

    cout << "First number: " << numbers.front() << endl;
    cout << "Last number: " << numbers.back() << endl;
    cout << "---------------------------------------------" << endl;

    numbers.emplace(numbers.begin() + 1, 10);

    cout <<"First number: " << numbers.front() << endl;
    cout <<"Added number: " << numbers[1]<< endl;
    cout << "---------------------------------------------" << endl;

    auto result = find(numbers.begin(), numbers.end(),10);
    if(result != numbers.end()) {
        numberFound = *result;
        cout << "Number found: " << numberFound << endl;
        cout << "---------------------------------------------" << endl;
    } else {
        cout << "Number not found." << endl;
        cout << "---------------------------------------------" << endl;
    }
}