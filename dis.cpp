#include<bits/stdc++.h>
using namespace std;

void primeSieve( int n){

	int prime[100]={0};

	for( int i=2; i<=n; i++){

		for( int j=i*i; j<=n; j+=i){

			prime[j] = 1;
		}
	}

	for( int i=2; i<=n; i++){

		if( prime[i]==0){

			cout<<i<<" ";
		}
	}
}
// inclusion - exclusion

int inc_exc( int n, int a, int b){

	int c1 = n/a;

	int c2 = n/b;

	int c3 = n/(a*b);

	return c1+c2-c3;
}

int gcd( int a, int b ){

	while( b!=0){
		int rem = a%b;
		a = b;
		b = rem;
	}

	return a;
}
int main(){

	primeSieve(50);
	return 0;
}