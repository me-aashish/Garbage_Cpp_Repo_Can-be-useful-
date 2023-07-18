#include<bits/stdc++.h>
using namespace std;



int main(){

	int t;
	cin >> t;
	
	while(t--){

		unordered_map<long long , long long> p1;
		unordered_map<long long , long long> p2;

		int n, m;
		cin >> n >> m;

		for( int i=0; i<n; i++){

			long long a;
			cin >> a;
			

			p1[a]++;
		}

		for( int i=0; i<m; i++){

			long long a;
			cin >> a;
			

			p2[a]++;


				// if( it>1 ) cout << "Yes" << endl;

				// else cout << "No" <<endl;
		}

			



		

	}




	return 0;
		
}	 