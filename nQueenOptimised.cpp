     
#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define lld				long double
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

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	int n;
	cin >> n;

	nQueenOptimised( n, 0 );

	cout << totWays ;

	// cout<< "3";

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}