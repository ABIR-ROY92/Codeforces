#include<bits/stdc++.h>
using namespace std;
int main (){
        long long n,k;
        cin >> n >> k;

       
        long long year = (n-k+1); 
         long long result = 0;
        for(long long = year; i < n; i++){
            if(i%2==1){
                result++;
            }
        }

    if(result % 2 == 0){
        cout << "Yes " << endl;
    }
    else {
        cout << "NO "<< endl;
    }
}