
/* C++ program to implement basic stack
   operations */
#include <bits/stdc++.h>
 
using namespace std;
 
#define MAX 1000
 
class Stack {
    int top;
 
public:
    string a[MAX]; // Maximum size of Stack
 
    Stack() { top = -1; }
    bool push(string x);
    string pop();
    string peek();
    bool isEmpty();
};
 
bool Stack::push(string x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
 
string Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        string x = a[top--];
        return x;
    }
}
string Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        string x = a[top];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}
 
// Driver program to test above functions
int main()
{
    class Stack s;
    s.push("Aashish");
    s.push("Gaurang");
    s.push("Kshitij");
    s.push("Naman");
    // cout << s.pop() << " Popped from stack\n";
    //print all elements in stack :
    cout<<"\n\nName of student present in stack : \n";
    while(!s.isEmpty())
    {
        // print top element in stack
        cout<<s.peek()<<" ";
        cout << "\n";
        // remove top element in stack
        s.pop();
    }
 
    return 0;
}