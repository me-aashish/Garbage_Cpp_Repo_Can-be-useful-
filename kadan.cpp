#include<bits/stdc++.h>
using namespace std;

int kadanes( int a[], int n){

	
	int sum = 0, maxSum = a[0];

	for( int i = 0; i < n; i++){

		sum+=a[i];

		if( sum < 0 ) sum = 0;

		if( sum > maxSum ) maxSum = sum;
	}

	return maxSum ;
}

int main(){
	
	int n, totSum=0;
	cin >> n;

	int a[n];

	for( int i = 0; i < n; i++){

		cin >> a[i];

		totSum+=a[i];
	}

	int wrapSum = kadanes( a, n);

	int unwrapSum = 0;

	for( int i = 0; i < n; i++){

		a[i] =  -a[i];

		
	}

	int x = kadanes(a,n);

	unwrapSum = totSum + x;

	cout << max( wrapSum, unwrapSum);



	


	

	
	return 0;
}