#include <iostream> 
using namespace std; 
//int ns1 ()
	 
	    int value()    { return 5; } 
	
//int ns2()  
	
	    const double x = 100; 
	    double value() {  return 2*x; } 
	
  
int main() 
{ 
    // Access value function within ns1 
    cout << value() << '\n';  
  
    // Access value function within ns2 
    cout << value() << '\n';  
  
    // Access variable x directly 
    cout << x << '\n';        
  
    return 0; 
} 