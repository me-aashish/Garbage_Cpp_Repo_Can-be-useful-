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

//swapping 2 nos, using xor
void xorSwap( int a, int b){

	a = a^b;
	b = b^a;
	a = a^b;

	cout<<"\na is : "<<a
		<<"\nb is :"<<b;
}

//coutning no of 1
 int countBitsFast( int n){

	int count = 0;
	while(n){

		count++;
		n = n&(n-1);
	}

	return count;
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

// to find 2 unique nos. in array which occurs these 2 nos. occur only once

void unique2nos( int *a, int n){

	int res=0;

	for( int i=0; i<n; i++){

		res = res^a[i];


	}

	int i=0;

	int temp = res;

	while( temp>0){

		if( temp&1 ){ break;}

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

int  uniq( int *a, int n){

	
	return res;
}



int main(){
	
	
	int a[] = { 7,7,7,1,1,1,3,3,3,9};
	int n = sizeof(a)/sizeof(int);

	cout<<uniq(a,n);

	
	return 0;
}

