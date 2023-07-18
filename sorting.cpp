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

void insertionSort( vector <int> &arr){

	for( int i = 1; i < arr.size(); i++) {

		// find the best place for the ith-element
		int key = arr[i];

		// best place will be from 0 to i-1
		int j = i-1;
		
		while( j >= 0 and arr[j] > key ){

			arr[j+1] = arr[j];

			j--;
		}

		arr[j+1] = key;
	}
}


void bubbleSort( vector <int> &arr ){
	int count = 0;
    for( int i=0; i<arr.size()-1; i++ ){

        for( int j = 0; j<arr.size() - i - 1; j++ ){

            if( arr[j] > arr[j+1] ) {
				swap( arr[j] , arr[j+1] );
				count ++;
			}	
        }
    }
	cout << count <<endl;


}


int partitioning( vector<int> &arr, int lo, int hi ){               

    int m = lo;
    int pivot = hi;

    for( int i=lo; i<hi; i++){

        if( arr[i] < arr[pivot] ){

            swap( arr[i], arr[m] );
            m++;
        }

        
    }
    swap( arr[m], arr[pivot] );

    return m;
}

int randomPivotAlgo( vector<int> &arr, int lo, int hi ){

    int n = rand();

    int pivot = lo + (n%(hi-lo+1));

    swap( arr[pivot], arr[hi] );

    return partitioning( arr, lo, hi );
}

void quickSort( vector<int> &arr, int lo, int hi ){

    if( lo < hi ){

        int pivot_index = randomPivotAlgo( arr, lo, hi );

        quickSort( arr, lo, pivot_index-1 );
        quickSort( arr, pivot_index+1, hi );
    }
}
void merge( vector<int> &arr, int start, int end ){

	int m = start + (end-start)/2 ;

	int i = start, j = m+1;

	int *result = new int[end-start]();
	// int result[end-start] ={0}; 

	int k = 0;

	while( i <= m and j <= end ){

		if( arr[i] < arr[j] ){

			result[k++] = arr[i++];
		}else{

			result[k++] = arr[j++];
		}
	}

	while( i <= m ){

		result[k++] = arr[i++];
	}

	while( j <= end ){

		result[k++] = arr[j++];
	}

	k = 0;

	for( int i=start; i<=end; i++){

		arr[i] = result[k];
		k++;
	}

	delete [] result;
}

void mergeSort( vector<int> &arr, int start, int end ){

	if( start >= end ) return;

	int m = start + (end-start)/2 ;

	mergeSort( arr, start, m);
	mergeSort( arr, m+1, end);

	merge( arr, start, end);
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

	bubbleSort(arr);

	for( int i=0; i<n; i++){

		cout << arr[i] <<" ";
	}



	return 0;
}