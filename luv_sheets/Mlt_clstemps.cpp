#include <iostream>  
using namespace std;  
template<class X,class Y, class Z> 
void fun(X a,Y b,Z c)  // passing the arguments of the different types 
{  
    cout << "Value of a is : " <<a<<endl;  
    cout << "Value of b is : " <<b<<endl;
    cout<<  "value of c is : "<<c<<endl;
}  
  
int main()  
{  
   char x = 'C';
   fun(15,12.3,x);  
   
   return 0;  
}  