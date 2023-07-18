#include<bits/stdc++.h>
using namespace std;

int kadanes( int *a, int n){

	int sum  = 0;
	int maxSum = a[0];

	for( int i=0; i<n; i++){

		sum+=a[i];

		if( sum<0 ){ 

			sum = 0;
		}

		if( sum>maxSum ){

			maxSum = sum;
		}
	}

	return maxSum;
}

int main(){
	
 int arr[]={-4,4,6,-6,10,-11,12};
 int n = sizeof(arr)/sizeof(int);

 int unwrapSum = kadanes(arr,n);

 // for wrapSum

 int wrapSum = 0;
 int totSum = 0;

 for( int i=0; i<n; i++){

 	totSum+=arr[i];

 	arr[i] = -arr[i];

 }

 wrapSum = totSum+kadanes(arr,n);

 cout<<max(wrapSum,unwrapSum);

 
    return 0;
}
