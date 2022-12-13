#include <iostream>  
using namespace std;  
template<class T> 
T add(T &a,T &b)  
{  
    T result = a+b;   // result of the type T which can store different values 
    return result;    // as the function of the type T it will return T 
      
}  
int main()  
{  
  int i =2;  
  int j =3;  
  float m = 2.3;  
  float n = 1.2;
  double k=909.32234343434;
  double l=9209320.434343434;
  cout<<"Addition of i and j is :"<<add(i,j);  
  cout<<'\n';  
  cout<<"Addition of m and n is :"<<add(m,n);  
  cout<<"\naddition  among the Double is :"<<add(k,l);
  return 0;  
}  