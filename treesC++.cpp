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
    // cout << "Enter the value of the root : ";
    cin >> d;
    if(d==-1) return NULL;
    node *root = new node(d);
    // cout << "Enter the value of left of the " << d << " : ";
    root->left = buildTree();
    // cout << "Enter the value of right of the " << d << " : ";
    root->right = buildTree();
    return root;

}

void preOrder(node *root){
    if(root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}



void preOrder_iterative(node *root){
    if(root == NULL) return;
    stack<node*>st;
    st.push(root);

    while(!st.empty()){
        cout << st.top()->data << " ";
        node *curr = st.top();
        st.pop();

        if(curr->right) st.push(curr->right);
        if(curr->left) st.push(curr->left);
    }
    
}

//right view of a tree
int maxLevel = INT_MIN;

void rightView(node* root, int currLevel){

    if(root == NULL) return;

    if(maxLevel < currLevel){

        cout << root->data << " ";
        maxLevel = currLevel;
    }

    rightView(root->right,currLevel+1);
    rightView(root->left,currLevel+1);
}

vector<int>ans;
void levelOrder(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        if(q.front() == NULL){
            cout << endl;
            q.pop();   
            q.push(NULL);
            if(q.size() == 1) break; 
        }
        node *curr = q.front();
        cout << q.front()->data << " ";
        q.pop();
        if(q.front() == NULL){
            ans.push_back(curr->data);
        }
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
        
    }  
}
map<int,int>mp;
map<int,vector<int>>m;

void toView(node* root,int level){
	if(root == NULL) return;

	if(mp.find(level) == mp.end()){
		mp[level] = root->data;
	}

	toView(root->left,level-1);
	toView(root->right,level+1);
}

void verticalTraversal(node* root, int level){
	if(root == NULL) return;

	if(m.find(level) == m.end()){
		m[level].push_back(root->data);
	}
	else{

		auto it = m.find(level);
		it->second.push_back(root->data);

	}

	verticalTraversal(root->left,level-1);
	verticalTraversal(root->right,level+1);
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....
	node *root = buildTree();
	levelOrder(root);
 //    // cout << endl << endl;
 //    // rightView(root,0);
 //    // vector<int>ans;
 //    // m[0].push_back(root->data);
 //    verticalTraversal(root,0);
 //    for(auto it: m){
 //    	for(auto el : it.second) cout << el << " ";
 //    	cout << endl;
 //    }
	


	#ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 

	return 0;
}