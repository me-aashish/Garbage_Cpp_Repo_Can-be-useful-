     
#include<bits/stdc++.h>
#include <string>
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

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	
		ll t;
		cin >> t;
		
		while(t--){

			ll n;
			cin >> n;
			ll a[n], b[n]; 

			for( int i=0; i<n; i++ ){

				cin >> a[i];
			}

			ll cnt_even = 0, cnt_odd = 0;
			
			for( int i=0; i<n; i++ ){

				if( (a[i]%2) == 0 ){

					cnt_even++;
				}

				else cnt_odd++;

			}

			

			ll odd_index = n-n/2, even_index = n/2;

			int sum = min( cnt_even, odd_index) + min( cnt_odd, even_index );
			
			cout << sum << endl;
		}

			

	

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}