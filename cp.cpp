#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int T;
	cin>>T;

	bool check = 0;

	while(T--){

		int N,M;
		cin>>N>>M;

		

		int A[N];

		for( int i=0; i<N; i++){

			
			cin>>A[i];
		}

		int sum=0, sum2=0;

		for( int i=1; i<=N; i++){

			sum+=i;

		}

		for( int i=0; i<N; i++){

				
			sum2+=A[i];
			

				


			
		}
			

	

		if( sum==sum2){

			cout<<"NO"<<endl;

		}

		else{

			cout<<"YES"<<endl;
		}

	}
	
	return 0;
}