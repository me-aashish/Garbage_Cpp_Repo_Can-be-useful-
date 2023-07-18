     
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
        sieve[1] = true;
    }

int arr[10];


void digiCnt( int n){
	
	while(n>0){

		int digit = n%10;
		// cout << digit <<" ";
		arr[digit]++;
		n = n/10;
	}


}    

bool flag = 0;

int maxDigit(int l, int r){

	createSieve();

	

	for(int i=l; i<=r; i++){

		if( sieve[i] == 1 ) {
			flag = 1;
			digiCnt(i);
		}
	}
	int maxCnt = 0;
	for(int i=0; i<=9; i++){

		maxCnt = max(arr[i],maxCnt);
		// cout << "max is " << maxCnt <<" ";
	}
	int ans = 0;
	for(int i = 0; i<=9; i++){

		if(maxCnt == arr[i]){
			ans = i;
			// cout << "ans is " << ans << " ";
		}
			
		
	}
	if( flag == 0) return -1;
	else return ans;
}    
    

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here.... // {R->BROWN, G->GREEM, B->BLUE}
	
	
	cout << maxDigit(2,5);
	
	
	
	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}