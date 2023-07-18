     
#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define endl			"\n"
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	



void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cout << *it << " = " << a << endl;
	err(++it, args...);
}


void file_i_o()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
}

int totWays = 0;

bool isItSafe( vector< vector <bool> > &grid, int i, int j, int n ){

	for( int k = i-1; k >= 0; k-- ){

		if( grid[k][j] ) return false;
	}

	for( int k = i-1, z = j+1; k >=0 and z <n; k--,z++ ){

		if( grid[k][z] ) return false;
	}

	for( int k = i-1, z = j-1; k >=0 and z >=0; k--,z-- ){

		if( grid[k][z] ) return false;
	}

	return true; 
}

void nQueen( vector< vector <bool> > &grid, int curr_row, int count ){

	int n = grid.size();

	if( curr_row == n ){

		totWays++;
		return;
	}

	for( int i=0; i<n; i++ ){

		if( isItSafe( grid, curr_row, i, n ) ) {

			// totWays++;
			grid[curr_row][i] = true;
			nQueen( grid, curr_row+1, count+1 );
			grid[curr_row][i] = false;
		}
	}
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....

	int n;
	cin >> n;

	// vector< vector <int> > grid( n, vector<int>(n) );

	vector< vector <bool> > grid( n, vector<bool>(n,false) );

	nQueen( grid, 0, 0);

	cout << totWays << endl;

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}