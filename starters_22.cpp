     
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

	vector<ll>temp;
	for(int i=0; i<17; i++){

		for(int j=i+1; j<18; j++){

			for(int k = j+1; k<19; k++){

				for(int l = k+1; l<20; l++){

					ll value = (1<<l) + (1<<k) + (1<<j) + (1<<i);
					temp.push_back(value);

				}
				if(temp.size() == 1000) break;
			}
			if(temp.size() == 1000) break;
		}
		if(temp.size() == 1000) break;
	}

	loop(i,0,n-1) cout << temp[i] << " ";
	cout << endl;
}



int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	get(t){

		solve();

	}


	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}