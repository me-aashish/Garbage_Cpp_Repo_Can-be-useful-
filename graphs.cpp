     
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

class Graph{

public:
	list<int>*arr;
	int v;

	Graph(int v){

		this->v = v;

		arr = new list<int>[v];
	}

	void addEdge(int u,int v,bool bidir = true){

		arr[v].push_back(u);
		if(bidir) arr[u].push_back(v);
	}

	void disp(){

		for(int i=0; i<v; i++){

			cout << "[" << i << "]" << " -> ";

			for(auto &it : arr[i]){

				cout << it << " -> ";
			}

			cout << endl;
		}
	}
};

vector<list<int>>vl;

void add(int u,int v){

	vl[v].push_back(u);
	vl[u].push_back(v);
}

void display(){

	for(int i=0; i<vl.size(); i++){

		cout << "[" << i << "]" << " -> ";
		for(auto &it : vl[i]){

			cout << it << " -> ";
		}
		cout << endl;
	}
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	int v;
	cin >> v;

	vl.resize(v,list<int>());

	int e;
	cin >> e;

	while(e--){

		int u,v;
		cin >> u >> v;
		add(u,v);
	}

	display();

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}

/*
[0] -> 1 -> 3 -> 
[1] -> 0 -> 2 -> 4 -> 
[2] -> 1 -> 3 -> 
[3] -> 2 -> 0 -> 4 -> 
[4] -> 1 -> 5 -> 3 -> 
[5] -> 4 -> 6 -> 
[6] -> 5 -> 


Executed In: 3 ms
*/