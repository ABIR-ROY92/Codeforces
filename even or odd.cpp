#include<iostream>
using namespace std;
int main ( )
{
    long long a;
    cin >> a;
    long long f = a/1000;

    if (f%2==0){
        cout << "EVEN";
    }
    else {
        cout << "ODD";
    }
    return 0;
}
