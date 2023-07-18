     
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

ll N = 100000000;
int sieveArr[100000001];

void sieve(){

	for( int i=2; i<=N+1; i++ ){

		sieveArr[i] = i;
	}

	for( int i=2; i*i<=N; i++ ){

		if( sieveArr[i] == i ){

			for( int j =i*i; j<=N; j+=i ){

				if( sieveArr[j] == j ){

					sieveArr[j] = i;
				}


			}
		}	
	}
}	

void MinprimeFact( int n ){

	int a = n;
	while( n > 1 ){

		a = min( a, sieveArr[n] );

		 // -> for all prime factors.
		cout << sieveArr[n] <<" ";

		n = n/sieveArr[n];
	}
	// cout << a;
}	






int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	sieve();
	
	MinprimeFact(1);


	


	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}