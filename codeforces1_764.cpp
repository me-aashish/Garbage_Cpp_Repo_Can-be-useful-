     
#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define endl			"\n"
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
#define get(t)          ll t; cin >> t; while(t--)



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
	    freopen("error.txt", "w", stderr);
	#endif
}



void solve(){

	ll n;
	cin >> n;
	vector<ll>arr(n);
	bool flag = 0;
	vector<bool>visited(n+1,0);
	loop(i,0,n-1) {
		cin >> arr[i];
		// if(arr[i] <= n) visited[i] = 1;
	}	

	loop(i,0,n-1){

		if(arr[i] <= n) visited[arr[i]] = 1;
		else{

			ll x = arr[i];

			while(x != 0 or visited[x] != 1){

				x /= 2;
				// cout << x << " ";

				if( x <= n and visited[x] != 1) {
					visited[x] = 1;
					break;
				}	
			}
			// cout << endl;
		}
	}

	// loop(i,1,n) cout << visited[i] << " ";
	loop(i,1,n){

		if(visited[i] == 0){
			flag = 1;
			break;
		}
	}
	if(flag) cout << "NO\n";
	else cout << "YES\n";
	// cout << endl;



}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	get(t){
		solve();
	}
	// ll a1,a2,a3;
	// cin



	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}