     
#include<bits/stdc++.h>
using namespace std;
#define ll				unsigned long long int
#define ld				long double
#define endl			"\n"
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" "; 	



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
bool sortbysec(const pair<int,int> &x,
              const pair<int,int> &y)
{
    if (x.second == y.second)
        return (x.first < y.first);
    else
        return (x.second > y.second);
}

int binarySearch(vector<int>&arr, int n, int key){
	int lo = 0, hi = n-1;
	while(lo <= hi){
		int mid = lo+(hi-lo)/2;

		if(arr[mid] == key) return mid;

		else if(arr[mid] > key) hi = mid-1;

		else lo = mid+1;
	}
	return -1;
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	
	// ll n;
	// cin >> n;

	// vector<ll>a,b;
	// for(int i=0; i<n; i++){
	// 	ll x;
	// 	cin >> x;
	// 	a.push_back(x);
	// }
	// for(int i=0; i<n; i++){
	// 	ll x;
	// 	cin >> x;
	// 	b.push_back(x);
	// }


	// vector< pair<int,int> >vp;

	// for(int i=0; i<n; i++){

	// 	vp.push_back(make_pair(a[i],b[i]));
	// }
	// sort(vp.begin(),vp.end(),sortbysec);
	// for( auto it : vp){

	// 	cout << it.first <<" " << it.second <<" ";
	// }
	vector<int>arr;
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}

	

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}
