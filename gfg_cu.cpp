     
#include<bits/stdc++.h>
using namespace std;
#define int                 long long int
#define ll                  long long
#define pii                 pair<int, int>
#define pll                 pair<long long, long long>
#define vi                  vector<int>
#define vll                 vector<long long>
#define mii                 map<int, int>
#define si                  set<int>
#define sc                  set<char>
#define endl			    "\n"
#define mid(l,r)            (l+(r-l)/2)
#define loop(i,s,e) 	    for(int i=(s);i<(e);i++)
#define looprev(i,s,e) 	    for(int i=(e-1);i>=(s);i--)
#define logarr(arr,a,b)	    for(int z=(a);z<(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
#define get(t)              ll t; cin >> t; while(t--)
#define MOD                 1000000007
#define PI                  3.1415926535897932384626433832795
#define pb push_back


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
	int n;
	cin >> n;
	int charlieX,davidY;
	cin >> charlieX >> davidY;

	vector<int>nums(n);

	for(int i=0; i<n; i++){
		cin >> nums[i];
	}

	stack<int>charlie,david;

	for(int i=0; i<n; i++){

		if(nums[i] % charlieX == 0) charlie.push(nums[i]);

		else if(nums[i] % davidY == 0) david.push(nums[i]);
	}
	bool charlieFLag = 1, davidFlag = 1;
	while(true){

		if(charlie.size() > 0) charlie.pop();
		else{
			charlieFLag = 0;
			break;
		}

		if(david.size() > 0) david.pop();
		else{
			davidFlag = 0;
			break;
		}

	}

	if(charlieFLag == 0) cout << "DAVID";
	else cout << "CHARLIE";
}

int32_t main() {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	solve();


	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}