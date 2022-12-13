#include <iostream>
using namespace std;
int main() {
	int num;
	// cout<<"enter the number of test cases"<<endl;
	cin >> num;
	while(num--)
	{
		int g=0,p=0,n=0;
		cin>>g>>p;
		cin>>n;
        int a[n][2];
		for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<1;j++)
            {
                if(a[i][j]==1)
                {
                    c1++;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<2;j++)
            {
                if(a[i][j]==1)
                {
                    c2++;
                }
                
            }
        }
        if(num%2==0){
            cout<<c1*p+c2*g<<endl;  
        }
        else
        cout<<c1*g+c2*p<<endl;
        // cout<<c2*p<<endl;

	}   
    return 0; //Reading input from STDIN
	// cout << "Input number is " << num << endl;	// Writing output to STDOUT
} 