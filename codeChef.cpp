#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"


int main(){
	
	int t;
	cin >> t;

	while( t-- ){

		int n;
		cin >> n;

		int num = pow(2,n);
		int arr[num-1];
		bool visited[num-1] = {0};

		for( int i=0; i<num; i++){

			arr[i] = i;
		}

		for( int i=0; i<num; i++){

			if( visited[i] == 0 ){

				int element = arr[i] ^ num;

				swap( arr[element], arr[i]);

				visited[i] = 1;
				 
			}
		}

		for( int i=0; i<num; i++){

			cout << arr[i] <<" "; 
		}


	}
	return 0;
}