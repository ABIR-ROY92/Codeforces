#include<iostream>
#include <iomanip>
using namespace std;
int main ( )
{
    double r;
     cin >> r;
    double pi= 3.141592653;

     double area = pi* r * r;


    cout<< fixed << setprecision (9);
    cout<< area;
    return 0;
}
