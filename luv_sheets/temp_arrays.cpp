#include<bits/stdc++.h>
using namespace std;
template<class T>
class vector1
{   public:
    T *arr;
    int size;
    vector1(int m) // this is constructor 
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector1&v)
    {   T d=0;
        for(int i=0;i<size;i++)
        {
            d+= this->arr[i]*v.arr[i];
        }
        return d;
    }
    
};
int main()
{
    vector1<float> v1(3);// declaring an array of the type float of size 3;
    // inserting the values here only as demo ;
    v1.arr[0]=1.4;
    v1.arr[1]=3.45;
    v1.arr[2]=5.34;
    // declaring an array of the type int and of size 3 as
    vector1<float>v2(3);
    v2.arr[0]=2 ;
    v2.arr[1]=3 ;
    v2.arr[2]=5 ;
    // caliing the function T dotproduct here 
    float a = v1.dotproduct(v2);
    cout<<a<<endl;
}