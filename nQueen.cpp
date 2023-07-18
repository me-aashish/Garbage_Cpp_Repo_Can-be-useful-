#include<bits/stdc++.h>
using namespace std;

int queenCount = 0;

void dispGrid( vector <vector<bool> > &grid, int n ){

	for( int i = 0; i < n; i++ ){

		for( int j = 0; j < n; j++ ){

			if( grid[i][j] ){

				cout << "Q ";
			}else{

				cout << ". ";
			}
		}
		cout << endl;
	}
	cout << "\n"<<"\n";
}

bool isItSafe( vector <vector<bool> > &grid, int row, int col, int n ){

	for( int i = row-1; i>=0; i-- ){

		if( grid[i][col] ) return false;
	}

	for( int i = row-1, j = col+1; i>=0 and j<n; i--,j++ ){

		if( grid[i][j] ) return false;
	}

	for( int i = row-1, j = col-1; i>=0 and j>=0; i--,j-- ){

		if( grid[i][j] ) return false;
	}

	return true;
}

void nQueen( vector <vector<bool> > &grid, int curr_row, int n ){

	if( curr_row == n ){

		queenCount++;
		dispGrid(grid, n );
		return;
	}

	for( int i=0; i<n; i++ ){

		if( isItSafe( grid, curr_row, i, n )){

			grid[curr_row][i] = true;
			nQueen( grid, curr_row + 1, n );
			grid[curr_row][i] = false;

		}
	}
}

bitset<100> col, ld, rd;

int totWays = 0;

void nQueenOptimised( int n, int cr){

	if( cr == n ){

		totWays++;
		return;
	}

	for( int c = 0; c < n; c++){

		if( !col[c] and !ld[cr-c+n-1] and !rd[c+cr]  ){

			col[c] = ld[cr-c+n-1] = rd[c+cr] = 1;

			nQueenOptimised( n, cr+1);

			col[c] = ld[cr-c+n-1] = rd[c+cr] = 0;


		}
	}
}

int main(){
	
	int n;
	cin >> n;

	nQueenOptimised( n, 0 );

	cout << totWays ;

	cout<< "3";

	
	return 0;
}

