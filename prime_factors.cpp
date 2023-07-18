     
#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define endl			"\n"
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
#define MOD             1000000007



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

// long long int sieve[1000000];

// void createFactors(){

// 	for(int i=2; i<=1000000; i++){

// 		sieve[i] = i;
// 	}

// 	for( int i=2; i*i<=1000000; i++){

// 		if( sieve[i] == i){

// 			for( int j=i*i; j<=1000000; j+=i ){

// 				if( sieve[j] == j){

// 					sieve[j] = i;
// 				}
// 			}
// 		}
// 	}
// }

ll N = 100000000;


 // int reverse(int n){
 //        int m = 0;
 //        while (n) {
 //            m = m*10 + n % 10;
 //            n /= 10;
 //        }
 //        return m;
 //    }
 //    int isPalindrome(int n){
 //        return n == reverse(n);
 //    }


 // int primePalindrome(int n) {
 	
 // 	createSieve();

 // 	for(int i=n ; ; i++){

 // 		if( sieve[i] == true ){

 // 			if( isPalindrome(i) ){

 // 				return i;
 // 				break;
 // 			}
 // 		}
 // 	}       
 // }

// bool sieve[100000000];
//     void createSieve(){
        
//         for( int i=2; i<=100000000; i++){
            
//             sieve[i] = true;
//         }
        
//         for(int i=2; i*i<=100000000; i++){
            
//             if( sieve[i] == true){
                
//                 for(int j=i*i; j<=100000000; j+=i){
                    
//                     sieve[j] = false;
//                 }
//             }
//         }
//     }

// int numPrimeArrangements(int n) {

//     createSieve();
    
//     vector<ll>arr(n);

//     for(int i=1;i<=n;i++){

//         if(sieve[i]) 
//     }
// }

long long mOD = 1000000007;
    bool sieve[100000000];
    void createSieve(){
        
        for( int i=2; i<=100000000; i++){
            
            sieve[i] = true;
        }
        
        for(int i=2; i*i<=100000000; i++){
            
            if( sieve[i] == true){
                
                for(int j=i*i; j<=100000000; j+=i){
                    
                    sieve[j] = false;
                }
            }
        }
    }
    
    int factorial(int n){
        int fact = 1;
        for(int i=n; i>=1; i--){

            fact = (fact%mOD * i%mOD)%mOD ;
        }

        return fact;
    }

    
    int isprime(int num){
       if (num <= 1)
          return 0;
       for (int i = 2; i <= num/2; i++){
          if (num % i == 0)
             { return 0; }
       }
       return 1; //if both failed then num is prime
    }
    int countPrimes(int strt,int end){
       int count=0;
       for(int i=strt;i<=end;i++){
          if(isprime(i)==1)
             { count++; }
       }
       return count;
    }   


    int numPrimeArrangements(int n) {

        // createSieve();
        int cnt = countPrimes(1,n);
        // for(int i=1;i<=n;i++){

        //     if(sieve[i]) cnt++;
        // }
        // for(int i=2; i*i<=n; i++){

        //     if()
        // }

        int ans = (factorial(cnt)%mOD * factorial(n-cnt)%mOD)%mOD ;

        return ans;

    }

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
    cout << numPrimeArrangements(100);

	

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}