#include<bits/stdc++.h>
using namespace std;
template<class T>
class vector{
    T*arr;
    public:
        vector(T*arr)
        {
            cout<<arr;
        }
};
int main()
{   
    int a=90;
    float b=900;
    int *ptr =&a;
    float *ptr1=&b;
    vector<int>myvec(ptr);
    vector<float>myfvvec(ptr1);
    return 0;
}