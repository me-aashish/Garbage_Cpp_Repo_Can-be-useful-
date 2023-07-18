// #include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
#define ll long long 
#define endl "\n"

int main(){
    
    int t;
    cin >> t;

    while( t-- ){

        ll int a,b;
        cin >> a >> b;
       

        ll int maxBetween = max(a,b);
        ll int minBetween = min(a,b);
        
        int maxSum = INT_MIN;

        for( ll int i=minBetween; i<=maxBetween; i++){

            double fst = (b-i)/2.0, scnd = (i-a)/2.0 ;
            
            
            int sum = (ceil(fst) + ceil(scnd) );
            
            if( sum > maxSum ) maxSum = sum;
        }

        cout << maxSum << endl;
    }
    return 0;
}