#include <iostream>    
using namespace std;    
class Cal {    
    public: 
	   
 int add(int a,int b){      
        return a + b;      
    }      
 int add(int a, int b, int c)      
    {      
        return a + b + c;      
    }      
};     

int main(void) {    

//cout << Cal::add(50,75) << endl;
//
//cout << Cal::add(10,20,30) << endl;

    Cal C; 
//	static int x =500;
    cout<<C.add(10, 20)<<endl;      
    cout<<C.add(12, 20, 23);     
   return 0;    
}    

