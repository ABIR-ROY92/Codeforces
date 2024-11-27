#include <iostream>
#include <cmath>  // Include cmath for floor, ceil, and round functions
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    // Calculate the floor, ceil, and round results
    int floor_result = floor(static_cast<double>(A) / B);
    int ceil_result = ceil(static_cast<double>(A) / B);
    int round_result = round(static_cast<double>(A) / B);

    // Output the results
    cout << "floor " << A << " / " << B << " = " << floor_result << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil_result << endl;
    cout << "round " << A << " / " << B << " = " << round_result << endl;

    return 0;
}
