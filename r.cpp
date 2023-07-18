#include<bits/stdc++.h>
using namespace std;

void rev( string &s, int i, int n, string osf){

	if(i==n){

		cout << osf;
		return;
	}

	rev(s,i+1,n,osf+s[n-i-1]);
}

 void replacePI( string str ){

 	if( str.length()==0 ){

 		return;
 	}

 	if( str[0]=='p' && str[1]=='i'){

 		cout << 3.14;

 		replacePI( str.substr(2));
 	}

 	else{

 		cout << str[0];

 		replacePI(str.substr(1));
 	}
 }

// string a = "";
// void removeDup( string s){

// 	if( s.length()==0){

// 		return;					//aaaabbcccdeeee
// 	}

// 	if(s[0]==s[1]){

// 		cout << s[0];

// 	 removeDup(s.substr(2));
// 	}

// 	else{

// 		cout << s[0];

// 		removeDup(s.substr(1));
// 	}
// }
string cnt = "";
string moveX( string s, string osf, int i,int n){		//axxbdxcefxhix

	if(i==n){

		return osf;
		
	}

	if( s[i]!='x'){

		
		return moveX(s,osf+s[i],i+1,n);
	}

	else {

		cnt+='x';

		return moveX(s,osf,i+1,n);

		
		
	}	
	
	

 }

 void printSubset( string s, string osf, int n, int i){

 	char ch = s[0];

 	int code = ch;

 	if( i==n ){

 		cout << osf <<endl;
 		return;
 	}

 	printSubset(s,osf+"",n,i+1);
 	printSubset(s,osf+s[i],n,i+1);

 	
 	

 }

 void printASCII( string s, string ans){

 	if( s.length()==0){

 		cout << ans <<endl;
 		return;
 	}

 	char ch = s[0];

 	int code = ch;

 	string ros = s.substr(1);
 	
 	printASCII( ros, ans);
 	printASCII( ros, ans+ch);
 	printASCII( ros, ans+to_string(code));
 }



void gameboard( int n, int i, string osf){

	if( i>n ) return;

	if( i==n ){

		cout << osf <<endl;
		return;

	}

	for( int j=1; j<=6; j++){

		gameboard(n,i+j,osf+to_string(j)+" -> ");
	// gameboard(n,i+2,osf+to_string(2)+" -> ");
	// gameboard(n,i+3,osf+to_string(3)+" -> ");
	// gameboard(n,i+4,osf+to_string(4)+" -> ");
	}	
}

void maze( int m, int n, int i,int j, string osf){

	if( i>m or j>n) return;

	if( i==m-1 and j==n-1 ){

		cout << osf <<endl;

		return;
	}

	maze(m, n, i+1,j, osf+" Right → " );

	maze(m, n, i, j+1, osf+" Down ↓");
}

void permutation( string s, string ans ){

	if( s.length()==0 ){

		cout << ans <<endl;
	}

	

	for( int i=0; i<s.length(); i++){

		char ch = s[i];

		string ros = s.substr(0,i)+s.substr(i+1);

		permutation(ros,ans+ch);
	}
}

int knapSack( int value[], int wt[], int n, int W){

	if( n==0 or W==0 ){

		return 0;
	}

	if( wt[n-1] > W ){

		return knapSack( value, wt, n-1, W);
	}

	return max( knapSack( value, wt, n-1, W - wt[n-1]) + value[n-1] , knapSack( value, wt, n-1, W) );
}

void decInc( int n ){

	if( n==0 ){

		// cout << 1 <<endl;
		return;
	}

	cout << n << endl; 

	decInc( n-1 );

	cout << n << endl;


}

// void incDec ( int n ){

// 	if( n==1 ){

// 		cout << n <<endl;
// 		return;
// 	}

// 	incDec(n-1);

// 	cout << n << endl;

	
// }

int main(){

	decInc(5);
	

	return 0;
}