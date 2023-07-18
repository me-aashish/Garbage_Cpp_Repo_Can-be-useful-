#include<bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for( int i = (a); i<=(b); i++)

int binarySearch( int *arr, int n, int target){

	int lo = 0, hi = n-1;

	

	while( lo <= hi ){

		int mid = lo+((hi-lo)/2);

		if( arr[mid] == target ) return mid;

		else if( arr[mid] > target ) {

			hi  = mid - 1;
		}

		else{

			lo = mid+1;
		}
	}

	return -1;
}

int binarySearchOnRotated( int *arr, int n, int target ){

	int hi = n-1, lo = 0;

	while( lo <= hi ){

		int mid = lo+((hi-lo)/2);

		if( arr[mid] == target ) return mid;

		else if( arr[mid] >= arr[lo] ){

			if( target <= arr[mid] and target >= arr[lo] ){

				hi = mid - 1;

			}else {

				lo = mid + 1;
			}


		}

		else{

			if( target >= arr[mid] and target <= arr[hi] ){

				lo = mid + 1;
			}else{

				hi = mid - 1;
			}
		}
	}

	return -1;
}
#define esp 1e6

int squareRoot( int n ){

	int lo = 1, hi = n-1;

	int ans = 0;

	while( hi-lo > 1 ){

		int m = lo+((hi-lo)/2);

		if(  m * m == n ) return m;

		else if( m * m > n ){

			hi = m - 1;
		}else{

			ans = m;

			lo = m +1;
		}

	}

	return ans;
}

int search ( int *arr, int n, int target ){

	int lo = 0, hi = n-1;

	while( hi >= lo ){

		int mid = lo + (hi-lo)/2 ;

		if( arr[mid] == target ) return mid;

		else if( arr[mid] > target ){

			hi = mid-1;

		}else if( arr[mid] < target ){

			lo = mid+1;
		}
	}

	return -1;
}

int seachSortedRotated( int *arr, int n, int target){

		int lo = 0, hi = n-1;

		while( hi >= lo ){

			int mid = lo + (hi-lo)/2 ;

			if( arr[mid] == target ) return mid;

			else if( arr[mid] > arr[lo] ){

				if( target >= arr[lo] and target <=arr[mid] ){

					hi = mid-1;
				}else{
					lo = mid+1;
				}
			}

			else{

				if( target >= arr[mid] and target <= arr[hi] ){

						lo = mid+1;
				}else{
					hi = mid-1;
				} 	
			}


		}

		return -1;
			
}

// int eko( int *arr, int n) 


int main(){
	
	int n, int h;
	cin >> n >> h;

	// cout << squareRoot(n);

	int *arr = new int[n];

	loop(i, 0, n-1 ){

		cin >> arr[i];
	}	

	// // }

	// for( int i=0; i<n; i++){

	// 	cin >> arr[i];
	// }

	int target ;
	cin >> target;

	// cout << seachSortedRotated( arr, n, target);

	return 0;
}