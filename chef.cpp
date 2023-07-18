#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	
	int n;
	cin >> n;
	int arr[n];

	

	int q;
	cin>>q;

	for( int i=0; i<n; i++){

		cin >> arr[i];
	}

	int t = q/2;

	while(t--){

		int q1[4];

		for( int i=0; i<4; i++){

			cin >>q1[i];
		}

		int l = q1[1];
		int r = q1[2];
		int x = q1[3];

		int q2[2];

		for( int i=0; i<2; i++){

			cin >> q2[i];
		}

		int y = q2[1];

		

		for( int i=l; i<=r; i++ ){

			int j = 0;

			arr[j] += (x+i-l)*(x+i-l);
			cout << arr[j] <<" ";
			j++;
		}

		cout << endl;

		
	}


	return 0;
}