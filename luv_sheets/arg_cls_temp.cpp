#include <iostream>  
     using namespace std;  
     template<class T1, class T2>  
    class A   
    {  
         T1 a;  
         T2 b;  
         public:  
        A(T1 x,T2 y)  // constructor 
        {  
           a = x;  
           b = y;  
        }  
        void display()  
        {  
                 std::cout << "Values of a and b are : " << a<<" ,"<<b<<std::endl;  
        }  
        T2 add(T2 c, T2 d)
        {
            // cout<<"addition is"<<float(c+d)<<endl;
            return c+d;
        }
      };  
  
      int main()  
     {  
           A<int,float> d(5,6.5); 
           A<float,float>d2(34.34,3435.5678); 
           A<char ,char>d3('x','y');
           d.display();  
           d2.display();
           d3.display();
           cout<<d.add(234343.4234,473463.6736437476)<<endl;
           cout<<d2.add(567.3232,2332789044987567.890)<<endl;
           cout<<d3.add('a','b');
           return 0;  
     }  