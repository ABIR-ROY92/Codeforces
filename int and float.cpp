#include<iostream>
using namespace std;
int main ( )
{
    double n;
    cin >>n ;

    int a=n;
    double res=n-a;

    if(res>0)
    {
        cout << "float " << a << " "<<res << endl;
    }
    else
    {
        cout << "int "<<n;
    }
    return 0;
}
