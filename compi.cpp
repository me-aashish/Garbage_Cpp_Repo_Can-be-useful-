#include<bits/stdc++.h>
using namespace std;

void vectorPrint( vector<int>v){

	cout << "size is : "<<v.size() << endl;

	for( int i=0; i<v.size(); i++){

		cout<<v[i]<<" "<< endl;
	}

	cout << endl;
}





int main(){

	// vector< pair<int,int> > v;

	// int n;
	// cin>>n;

	// for( int i=0; i<n; i++){

	// 	int x,y;
	// 	cin >> x >> y;

	// 	v.push_back( {x,y} );
	// }

	// vectorPrint(v);
	vector< int > v  ;

	for( int i = 0; i<4; i++){

		int x;
		cin>>x;

		// int y;
		// cin>>y

		// v.first.push_back(x);
		// v.second.push_back(y);
		v.push_back(x);
	}

	for( auto it : v){

		cout << it <<" ";
	}

	int ar[] = { 1,2,3,4,5,6};

	// for( auto i : ar){

	// 	cout << i << " ";
	// }




	

	

	return 0;
}



