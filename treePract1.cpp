     
#include<bits/stdc++.h>
using namespace std;
#define int                 long long int
#define ll                  long long
#define pii                 pair<int, int>
#define pll                 pair<long long, long long>
#define vi                  vector<int>
#define vll                 vector<long long>
#define mii                 map<int, int>
#define si                  set<int>
#define sc                  set<char>
#define endl			    "\n"
#define mid(l,r)            (l+(r-l)/2)
#define loop(i,s,e) 	    for(int i=(s);i<(e);i++)
#define looprev(i,s,e) 	    for(int i=(e-1);i>=(s);i--)
#define logarr(arr,a,b)	    for(int z=(a);z<(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
#define get(t)              ll t; cin >> t; while(t--)
#define MOD                 1000000007
#define PI                  3.1415926535897932384626433832795


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

class node{
	public:
		int data;
		node *left;
		node *right;

		node(int data){
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}

};	

node* buildTree(){

	int d;
	cin >> d;

	if(d == -1) return NULL;

	node *root = new node(d);

	root->left = buildTree();
	root->right = buildTree();

	return root;
}

void preOrder(node* root){

	if(!root) return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void iterativePreorder(node* root){

	stack<node*>st;
	st.push(root);

	while(!st.empty()){
		node* temp = st.top();
		st.pop();
		if(temp) cout << temp->data << " ";
		if(temp->right)st.push(temp->right);
		if(temp->left)st.push(temp->left);
	}
}

vector<int> PreInPostOrderTraversal(TreeNode* root) {
        
        vector<int>pre,in,post;
        stack<pair<TreeNode*,int>>st;
        st.push({root,1});
        if(!root) return post;
        while(!st.empty()){

            auto it = st.top();
            st.pop();

            if(it.second == 1){
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);
                if(it.first->left)st.push({it.first->left,1});
            }

            else if(it.second == 2){
                in.push_back(it.first->val);
                it.second++;
                st.push(it);
                if(it.first->right)st.push({it.first->right,1});
            }
            else{
                post.push_back(it.first->val);
            }
        }
        return post;
    }

int32_t main() {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	node *root = buildTree();
	iterativePreorder(root);
	// preOrder(root);

	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}