     
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

vector<pair<int,int>>vp;

void hasArrayTwoCandidates(int *arr, int arr_size,
                           int sum)
{
    int l, r;
 
    
    sort(arr, arr + arr_size);
 
   
    l = 0;
    r = arr_size - 1;
    while (l < r) {
        if (arr[l] + arr[r] == sum)
            {

            	vp.push_back((l,r));

            	if( l!=r) vp.push_back((r,l));
            }
        else if (arr[l] + arr[r] < sum)
            l++;
        else 
            r--;
    }
    return 0;
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	int t;
	cin >> t;

	while(t--){

		int n,s;
		cin >> n >> s;
		

		int *arr = new int[n+1];

		for( int i=0; i<=n; i++ ){

			arr[i] = i;
		}

		hasArrayTwoCandidates( arr, n+1, s );

		for( auto {x,y} : p ){

			cout << x <<"and" << y <<" "<<endl;
		}

	}

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}