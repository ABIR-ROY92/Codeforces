#include<bits/stdc++.h>
using namespace std;
int main (){
     int k, n, w;
    cin >> k >> n >> w;

    auto total = 0;

    for(int i = 1; i <= w; i++)
    {
        total += i * k;
    
    }
    auto cost;
        if(total > n){
            cost = total - n;
        }
        else {
            cost = 0;
        }
    cout << cost << endl;

    return 0;
}