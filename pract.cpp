     
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

string sum(string a, string b){

	string ans = "";

	char carry = '0';

	for(int i=a.length();i>=0;i--){

		if(a[i] == '1' and b[i] == '1'){

			if(carry == '1'){

				ans.push_back('1');
				carry = '1';
			}
			else{

				ans.push_back('0');
				carry = '1';
			}
		}

		else if(a[i] == '0' and b[i] == 0){
			ans.push_back('0');
			carry = '0';
		}

		else if(a[i]!=b[i]){
			if(carry = '1'){
				ans.push_back('0');
				carry = '1';
			}
			else{
				ans.push_back('1');
				carry = '0';
			}
		}
	}
	return ans;
}

int32_t main() {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	string a = "1111",b = "1",newB = "",newA="";
	string ans;
	if(a.length() > b.length()){
		for(int i=a.length()-1;i>=0; i--){

			if(i<=b.length()-1) newB += b[i];
			else newB += '0';
		}

		 ans = sum(a,newB);
	}
	else{
		for(int i=b.length()-1;i>=0; i--){

			if(i<=a.length()-1) newA += a[i];
			else newA += '0';
		}
		 ans = sum(b,newA);
	}
	cout << ans;
	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}