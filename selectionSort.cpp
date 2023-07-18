#include<bits/stdc++.h>
using namespace std;

int find_mind_index( vector <int> &arr, int i ){

	int min_index = i;

	while( i < arr.size() ){

		if( arr[i] < arr[min_index] ){

			min_index = i;
		}
		i++;
	}	

	return min_index;
}

void selectionSort ( vector <int> &arr ){

	for( int i = 0; i < arr.size(); i++){

		int min_index = find_mind_index( arr, i );

		if( i != min_index ) swap( arr[i], arr[min_index] );
	}
}

int main(){
	
	int n;
	cin >> n;

	vector <int> arr;

	for( int i=0; i<n; i++){

		int x;
		cin>>x;

		arr.push_back(x);
	}

	selectionSort(arr);

	for( int i=0; i<n; i++){

		cout << arr[i] <<" ";
	}



	return 0;
}