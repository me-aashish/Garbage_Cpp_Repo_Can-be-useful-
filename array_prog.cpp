     
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
	int n;
	cin >> n;
	int *arr = new int[n];

	loop( i, 0, n-1 ){

		cin >> arr[i];
	}

	int target;
	cin >> target;
	bool isFound = false;

	loop( i, 0, n-1 ){

		if( arr[i] == target ){

			cout << i;
			isFound = true;
		}


	}

	if( isFound == false ){

		cout << "-1";
	}

	delete [] arr;


	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}