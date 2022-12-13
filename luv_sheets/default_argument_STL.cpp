#include<bits/stdc++.h>
using namespace std;
template< class T1 =int ,class T2 = float>
class hello{
    public:
    T1 a ;
    T2 b;
    // swap(a,b);
    hello( T1 a,T2 b)
    {
        this->a=a;
        this->b=b;
        this->display();
    }
    void display()
    {
       cout<<"the value of a is "<<this->a<<endl;
       cout<<"the value of b is "<<this->b<<endl;
       cout<<endl;

    }  
};
int main()
{
    int a=90;
    int b=9000;
    cout<<"this is the value before swapping:a= "<<a<<"\t b="<<b<<endl;
    //  swap using the function swap wwhich is A STL function 
    swap(a,b);
    cout<<"this is the values after swapping:a ="<<a<<"\t b= "<<b<<endl;
hello<>(4,6.343);
hello<char>('x',8.323);
hello<int,int>(100,234);
return 0;
}