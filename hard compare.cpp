#include <iostream>
#include <cmath>  // To use the log function

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate B * log(A) and D * log(C)
    long double lhs = B * log(A);
    long double rhs = D * log(C);

    // Compare the two results
    if (lhs > rhs) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
