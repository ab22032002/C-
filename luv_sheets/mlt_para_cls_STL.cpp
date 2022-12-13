#include<bits/stdc++.h>
using namespace std;
// template<class T1,class T2>
// class name_of_class{

// }
template<class T1,class T2>
class myclass{
    public:
    T1 a;
    T2 b;
    myclass(T1 a,T2 b)
    {
      this->a=a;
      this->b=b;
      this->display();
    }
    void display()
    {
        cout<<this->a<<"\t"<<this->b<<endl;
        // cout<<this->a<<"\t"<<this->b;
    }  
};
int main()
{
myclass <int,char> obj1(1,'c');
myclass <int,float>obj2(1,1.234);
myclass <float,char>obj3(23.23,'x');
return 0;
}