#include<bits/stdc++.h>
using namespace std;

int main(){
	
		vector < pair < string,int > > vect;

		for( int i = 0; i<8; i++){

			string s;
			cin>>s;
			int a;
			cin>>a;
			vect.push_back( {s,a});
		}

		 sort(vect.begin(), vect.end());

		for( int i = 0; i<8; i++){

			cout <<vect[i].first<<endl;
		}


	return 0;
}