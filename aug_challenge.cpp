     
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

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....

	int t;
	cin >> t;

	while(t--){

		int a1, a2, a3, a4;
		cin >> a1 >> a2 >> a3 >> a4;

		unordered_set<int>s;

		s.insert(a1);
		s.insert(a2);
		s.insert(a3);
		s.insert(a4);

		int count = 0;

		for( auto it : s ){

			count++;
			
		}

		// count = count/2;

	// 	cout << count <<" ";

	// 	if( count == 4 ) cout <<"2\n";

	// 	if( count == 3 ) cout <<"1\n";

	// 	if( count == 2 ) cout <<"1\n";

	// 	if( count == 1 ) cout <<"0\n";
	// }

		cout << count/2 << endl;
	}	

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}