#include<iostream>
using namespace std;
int main ( )
{
    long long a,b;

    cin >> a >> b;

    int sum=a+b;
     long long m = a*b;
    int sub= a-b;

    cout <<a<< " + "<<b<< " = " << sum<< endl;
    cout << a << " * " << b << " = " << m<<endl;
    cout << a << " - " << b << " = " << sub ;
    return 0;
}

