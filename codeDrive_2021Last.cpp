     
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

long long int sieve[1000000];

void createFactors(){

	for(int i=2; i<=1000000; i++){

		sieve[i] = i;
	}

	for( int i=2; i*i<=1000000; i++){

		if( sieve[i] == i){

			for( int j=i*i; j<=1000000; j+=i ){

				if( sieve[j] == j){

					sieve[j] = i;
				}
			}
		}
	}
}

bool cmp(pair<int,int>a,pair<int,int>b){


}

void twoSum(vector<int>& nums, int target) {
       for(int i=0; i<nums.size(); i++){
        	vp.push_back({i,nums[i]});
        }

         for(int i=0; i<nums.size(); i++){

         	int elfnd = target - nums[i];

         	auto it = find(vp.begin(), vp.end, )
         }

        vector<int>ans;
        
        return ans;
    }

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	// createFactors();
	// get(t){

	// 	ll n,k;
	// 	cin >> n;
	// 	string s;
	// 	cin >> s;

	// 	for(int i=0; i<n; i++){
	// 		string r = "";
	// 		for(int j=i; j<i+k; j++) cout << s[j] << " ";
	// 		// cout << r << endl;	
	// 	}
		
	vector<int>nums = {3,3};

	cout << twoSum(nums,6);

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}