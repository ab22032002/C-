#include <iostream>  
using namespace std;  
template<class T, int size>  
class A   
{  
    public:  
    T arr[size];  
    void insert()  
    {  
        int i =1;  
        for (int j=0;j<size;j++)  
        {  
            cin>>arr[j];  
            //i++;  
        }  
    }  
      
    void display()  
    {  
        for(int i=0;i<size;i++)  
        {  
            cout << arr[i] << " ";  
        }  
        cout<<endl;
    }  
};  
int main()  
{  
    A<int,10> t1;  
    t1.insert();  
    t1.display();  
    A<float,20>t2;
    t2.insert();
    t2.display();
    return 0;  
}  