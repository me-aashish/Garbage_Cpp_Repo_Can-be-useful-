#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
  
  int t;
  cin >> t;

  while( t-- ){

    int a,b,c;

    cin >> a >> b >> c;

    int sum = a + b + c;

    int min_spell = min(a,b,c);

    int ans = sum - min_spell;

    cout << ans <<endl;
  }
  return 0;
}