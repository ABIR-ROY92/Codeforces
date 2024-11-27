#include<iostream>
using namespace std;
int main ( )
{
    long long a,b,c;
    int max=0, min=0;

    cin >> a >> b >> c;

    // finding the min value
    if(a<=b&&a<=c)
    {
        cout << a;
    }
    else if (b<=a&&b<=c)
    {
        cout << b;
    }
    else
    {
        cout << c;
   }

     cout << " ";
// finding the max value
    if (a>=b && a>=c)
    {
        cout << a;
    }
    else if (b>=a && b>=c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }


    return 0;
}
