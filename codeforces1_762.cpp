     
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

// const ll n = 100;

	// void kthSmallestPrimeFraction(vector<int>& arr, int k) {

	// 	int n1 = arr.size();
	// 	vector<float>temp;
	// 	map<pair<int,int>,float>m;
	// 	int n = arr.size() ;

	// 	for(int i=0; i<n1; i++){

	// 		for(int j=i+1; j<n1; j++){

	// 			float a = arr[i]/(arr[j]*1.00);
				
	// 			m[{arr[i],arr[j]}] = a;
	// 			temp.push_back(a);
	// 		}
	      
	// 	}
		
	// 	sort(temp.begin(),temp.end());
	// 	vector<int>ans;

	// 	for(auto it : m){

	// 		if(it.second == temp[k-1]) {

	// 			ans.push_back(it.first.first);
	// 			ans.push_back(it.first.second);

	// 		}
	// 	}

	// 	// for(auto it : ans) cout << it << " ";
	// 	return ans;
		
	// }


int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	
	// vector<int>ans = {1,7};
	// int k = 1;

	// kthSmallestPrimeFraction(ans,k);
	map<string,int>m;
	m["aashish"] = 1;
	if(m.find("aash") != m.end()) cout << "yes\n";
	else cout << "no";



	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}