     
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
ll cnt = 0;
void binarySearch(vector<ll>&arr, int n, int key, int l, int r){
	
	while(l <= r){
		int mid = l+(r-l)/2;

		if(arr[mid] >= key) {
			cnt++;
		}

		else {
			
			l = mid+1;
		}

		
	}
	
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	ll n,q;
	cin >> n >> q;

	vector<ll>arr;

	for(int i=0; i<n; i++){
		ll x;
		cin >> x;
		arr.push_back(x);
	}


	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}