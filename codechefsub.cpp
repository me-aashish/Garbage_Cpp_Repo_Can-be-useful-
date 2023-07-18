#include<bits/stdc++.h>
using namespace std;

int main(){

  ios_base :: sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  
  map<int,int> freq;

  int x;

  for( int i=0; i<n; i++){

    cin >> x;

    freq[x]++;
  }

  for( auto it : freq ){

    cout << it.first <<" " << it.second << endl ;
  }

  return 0;
}

