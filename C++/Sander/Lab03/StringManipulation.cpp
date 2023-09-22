
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // a) Read three words from the user.
    string word1, word2, word3;
    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the second word: ";
    cin >> word2;
    cout << "Enter the third word: ";
    cin >> word3;

    // b) Make a string where you join these together with a space between and a period at the end.
    string sentence = word1 + " " + word2 + " " + word3 + ".";
    cout << sentence << endl;

    // c) Print the length of each individual word, and the length of the sentence as a whole.
    cout << "Length of word1: " << word1.length() << endl;
    cout << "Length of word2: " << word2.length() << endl;
    cout << "Length of word3: " << word3.length() << endl;
    cout << "Length of sentence: " << sentence.length() << endl;

    // d) Make a copy of the “sentence”. 
    string sentence2 = sentence;

    // e) Replace characters number 10-12 in “sentence2” with x’s.
    if(sentence2.length() >= 13) {
        sentence2.replace(10, 3, "xxx");
    }
    cout << "sentence: " << sentence << endl;
    cout << "sentence2: " << sentence2 << endl;

    // f) Store the first five characters of the sentence in the object “sentence_start”.
    string sentence_start = sentence.substr(0, 5);
    cout << "sentence: " << sentence << endl;
    cout << "sentence_start: " << sentence_start << endl;

    // g) Find out if the “sentence” contains the word “hello”. Print the result.
    size_t found = sentence.find("hello");
    if (found != string::npos) {
        cout << "The sentence contains 'hello'." << endl;
    } else {
        cout << "The sentence does not contain 'hello'." << endl;
    }

    // h) Find all occurrences in the “sentence” of the string “is”. Print the result.
    size_t pos = 0;
    while ((pos = sentence.find("is", pos)) != string::npos) {
        cout << "'is' found at position: " << pos << endl;
        pos += 2;  // Move past the found substring to avoid infinite loops
    }

    return 0;
}
    