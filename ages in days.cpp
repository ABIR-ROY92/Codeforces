#include<iostream>
using namespace std;
int main ( )
{
    int n;
    cin >> n;

    int years = n / 365;
    int remainingDays = n % 365;

    int months=remainingDays / 30;
    int days =remainingDays % 30;

    cout<< years << " years"<<endl;
    cout << months << " months"<<endl;
    cout << days<< " days";


    return 0;
}
