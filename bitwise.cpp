#include<bits/stdc++.h>
using namespace std;

//counting the no of 1
int countBits( int n){

	int count  = 0;

	while ( n>0){

		count+=(n&1);
		n = n>>1;
	}

	return count;
}

//coutning no of 1
 int countBitsFast( int n){

	int count = 0;
	while(n){

		
		n = n&(n-1);
		count++;
	
	}

	return count;
}


//swapping 2 nos, using xor
void xorSwap( int a, int b){

	a = a^b;
	b = b^a;
	a = a^b;

	cout<<"\na is : "<<a
		<<"\nb is :"<<b;
}


//to get ith bit of a no.
 int getIthBit( int n, int i){

	return ( n & (1<<i) )!=0?1:0;

}

//to set ith bit as 1
 int setIthBit( int &n, int i){

	int mask = 1<<i;

	n = n|mask;

	return n;

}

//to clear the bit or to make ith bit as 0
int clearIthBit( int &n, int i){

	int mask = ~(1<<i);
	n = n & mask;

	return n;
}

// to generate subsequences of a string
void filterChar( char *a, int no){

	int i = 0;

	while( no>0){

		(no&1)?cout<<a[i]:cout<<"";
		i++;
		no = (no>>1);
	}
	cout<<endl;
}

// to generate subsequences of a string contd.
void genSubsets( char *a){

	int n = strlen(a);

	int range = (1<<n) - 1;

	for( int i=0; i<=range; i++){

		filterChar(a,i);


	}
}



void unique2nos( int a[], int n){

	int res=0;

	for( int i=0; i<n; i++){

		res = res^a[i];


	}

	int i=0;

	int temp = res;

	while( temp>0){

		if( temp&1 ){ break; }

		i++;
		temp = temp>>1;
	} 

	int mask = 1<<i;

	int fst = 0;
	int scnd = 0;

	for( int i=0; i<n; i++){

		if( (mask&a[i])!=0 ){

			fst = fst^a[i];
		}

	}

	scnd = res^fst;

	cout<<fst<<" "<<scnd;
}

int getOddBitSum( int n ){
	int sum = 0;
	for( int i=0; i<n; i++){

		if( (i+1)%2 != 0 ){

			int bit = getIthBit(n,i);
			sum +=bit;
		}
	}

	return sum;
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


int main(){
	file_i_o();
	cout<<countBitsFast(1101);

	
	return 0;
}

