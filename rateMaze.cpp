     
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

int totalPath = 0;

bool isItSafe( int n, int i, int j, vector< vector <bool> > &visited ){

	return i >= 0 and j >= 0 and i < n and j < n and visited[i][j] == false;
}

void helper( vector< vector <int> >  &grid, int n, int i, int j, vector< vector <bool> > &visited ){

	if( i == n-1 and j == n-1 ){

		totalPath++;
		return;
	}

	if( not isItSafe( n, i, j, visited ) ){

		return ;
	}

	visited[i][j] = true;

	if( i+1 < n and grid[i+1][j] == 0 ){

		helper( grid, n, i+1, j, visited );
	}

	if( i-1 >= 0 and grid[i-1][j] == 0 ){

		helper( grid, n, i-1, j, visited );
	}

	if( j+1 < n and grid[i][j+1] == 0 ){

		helper( grid, n, i, j+1, visited );
	}

	if( j-1 >= 0 and grid[i][j-1] == 0 ){

		helper( grid, n, i, j-1, visited );
	}

	visited[i][j] = false;
}

int countRatMazePath( vector< vector <int> >  &grid){

	int n = grid.size();

	vector< vector <bool> > visited( n, vector<bool>(n,false) );

	helper( grid, n, 0, 0, visited );

	return totalPath++;
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....

	int n;
	cin >> n;

	vector< vector<int> > grid( n, vector<int>(n,0) );

	loop( i,0,n-1){

		loop(j,0,n-1){

			cin >> grid[i][j];
		}
	}

	cout << countRatMazePath(grid);
	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}