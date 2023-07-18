     
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
ld mod = 10e-6;
void solve(){

	ll n;
	cin >> n;

	vector<ll>arr;
	arr.push_back(1);

	ll num = 1,siz = 2;

	for(int i=2;i<2*n; i++){

		if( (num + i) % siz == 0 ) continue;
		else{
			arr.push_back(i);
			
			siz++;
		}
		num += i;
		if(arr.size() == n) break;
	}

	for(auto it : arr) cout << it << " ";
	cout << endl;	

}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	stack<int>s;
	int arr[] = {1,4,6,8,9,4,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << n << " ";
	int i=0;

	while(i<=8){

		if(s.empty()){
			s.push(arr[i]);
			i++;
		}else if(s.top() > arr[i]){
			s.pop();
		}else{
			s.push(arr[i]);
			i++;
		}
	}
	cout << s.size();


	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}