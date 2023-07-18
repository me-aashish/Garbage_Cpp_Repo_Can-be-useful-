     
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

long long int sieve[100000000];

void createFactors(){

	for(int i=2; i<=100000000; i++){

		sieve[i] = i;
	}

	for( int i=2; i*i<=100000000; i++){

		if( sieve[i] == i){

			for( int j=i*i; j<=100000000; j+=i ){

				if( sieve[j] == j){

					sieve[j] = i;
				}
			}
		}
	}
}

bool hashing[100000000];

void createHash(int n){

	hashing[n] = 1;
}


ll countFactors(int n){

	createHash(n);

	ll cnt = 0;
	while(n!=1){

		if( hashing[ sieve[n] ] != 1) cnt++;
		
		n = n/sieve[n];
	}
	return cnt;
}


int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	createFactors();
	ll t;
	cin >> t;

	while(t--){

		ll n;
		cin >> n;

		ll ans = 2 + countFactors(n-1);

		cout << ans << endl;
	}


	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}