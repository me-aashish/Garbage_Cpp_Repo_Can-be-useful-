#include<bits/stdc++.h>
using namespace std;

bool isPossible( int h , int tree[], int n, int k){

	int wood = 0;

	for( int i=0; i<n; i++){

		if( tree[i] >=h){

			wood+=(tree[i]-h);
		}
	}

	return wood >=k;


}

void find_height(int tree[], int n, int k)
    {
        // code here

        sort( tree, tree+n);


        int lo  = 0, hi = n-1, mid;

        while( hi-lo > 1){

        	mid = (hi+lo) / 2;

        	if( isPossible(mid, tree, n, k) ){

        		lo = mid;
        	}

        	else{

        		hi = mid-1;
        	}


        }

        if( isPossible(hi,tree,n,k)) cout << hi;

        else cout << lo;
    }

int main(){

	// int tree[] = {1, 7, 6, 3, 4, 7};
	
	// find_height(tree, 6, 8);
	string str = "binod";
	// cin >>str;
	cout << str;
	return 0;
}