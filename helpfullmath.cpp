#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Create a string to hold only the digits (remove '+')
    string digits;

    // Extract all the digits from the input
    for (char ch : s) {
        if (ch != '+') {
            digits += ch;
        }
    }

    // Sort the digits
    sort(digits.begin(), digits.end());

    // Reconstruct the sorted sum
    for (int i = 0; i < digits.length(); i++) {
        if (i > 0) {
            cout << "+";
        }
        cout << digits[i];
    }

    return 0;
}
