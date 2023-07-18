     
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


 bool sieve[100000];
    void createSieve(){
        
        for( int i=2; i<=100000; i++){
            
            sieve[i] = true;
        }
        
        for(int i=2; i*i<=100000; i++){
            
            if( sieve[i] == true){
                
                for(int j=i*i; j<=100000; j+=i){
                    
                    sieve[j] = false;
                }
            }
        }
    }
    
// void ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
// 	// Write your code here.

//     int arr[m+n];
    
    
//     int i = 0, j = 0,k=0;
//     // cout << k << endl;
//     while(i < arr1.size() and j < arr1.size()){
        
//         if(arr1[i] <= arr2[j]){
//             arr[k++] = arr1[i];
//             // arr.push_back(arr1[i]);
//             i++;
//         }else{
//             arr[k++] = arr2[j];
//             // arr.push_back(arr2[i]);
//             j++;
//         }
        
        
//     }
    
//     if(j >= arr2.size()){
            
//         while(i < arr1.size()) {
//                 arr[k++] = arr1[i];
//                 // arr.push_back(arr1[i]);
//                 i++;
//         }    
//      }
//     if(i >= arr1.size()){
            
//         while(j < arr2.size()) {
//                 arr[k++] = arr2[j];
//         		// arr.push_back(arr2[j]);
//                 j++;
//         }    
//     }
//         // for(int i = 0; i<m+n; i++){
//         //     arr[i] = arr1[i];
//         // }
//         // delete [] arr;
//     for(auto it : arr) cout << it << " ";
// }

    vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int *arr = new int[m+n];
    
    
    int i = 0, j = 0,k=0;
//     cout << k << endl;
    while(i < arr1.size() and j < arr1.size()){
        
        if(arr1[i] <= arr2[j]){
            arr[k++] = arr1[i];
//             arr.push_back(arr1[i]);
            i++;
        }else{
            arr[k++] = arr2[j];
//             arr.push_back(arr2[i]);
            j++;
        }
        
        
    }
    
    if(j >= arr2.size()){
            
        while(i < arr1.size()) {
                arr[k++] = arr1[i];
//                 arr.push_back(arr1[i]);
                i++;
        }    
     }
    if(i >= arr1.size()){
            
        while(j < arr2.size()) {
                arr[k++] = arr2[j];
//         		arr.push_back(arr2[j]);
                j++;
        }    
    }
    for(int i=0; i<m+n; i++){
        // arr[i] = arr1[i];
        arr1[i] = arr[i];
    }
    // delete []arr;
    return arr1;
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....

	// vector<vector<bool>>vBool(10,vector<bool>(20,1));
	// vector<bool>v(20,0);
	// vBool[2].push_back(0);

	// vBool.push_back(v);

	// for(auto vctr : vBool){

	// 	for(auto it : vctr){

	// 		cout << it <<" ";
	// 	}
	// 	cout << endl;
	// }
	// set<int>s;

	// s.insert(1);
	// s.insert(2);
	// s.insert(3);

	// s.erase( s.begin(), s.begin()+2 );
	// int cnt = 0;

	// for(auto it:s ){

	// 	s.erase(it);
	// 	++cnt;

	// 	if(cnt==2) break;
	// }
	// for( int i=1; i<=2; i++){

	// 	s.erase(s.begin());
	// }

	// for(auto it :s) cout << it;

	// multiset<int>ms;

	// ms.insert(2);
	// ms.insert(3);
	// ms.insert(2);
	// ms.insert(4);
	// ms.insert(3);

	// for( auto it : ms ){

	// 	cout << it << " ";
	// }

	// std::vector<int> v = {1,5,7,7,8,10,10,10,11,11,12};

	// int ind = upper_bound(v.begin(),v.end(),5) - v.begin();
	// // cout << ind;
	// cout << *min_element(v.begin(),v.end());

	vector<int>arr1 = {1 ,2 ,3};
	vector<int>arr2 = {4,5};

	vector<int>ans = ninjaAndSortedArrays(arr1,arr2,3,2);
	// ninjaAndSortedArrays(arr1,arr2,3,2);
	// cout << "hello";

	for(auto it : ans) cout << it << " ";

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}