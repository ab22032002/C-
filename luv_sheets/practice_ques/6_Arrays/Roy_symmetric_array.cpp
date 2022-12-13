#include <iostream>
using namespace std;
int main() {
	int num;
    cout<<"enter the number of test cases"<<endl;
	cin >> num; 
    while(num--)
    {
        int n;
        cout<<"enter the value of n "<<endl;
        cin>>n;
        int a[n][n];
        int k[n];
        // taking input as one number 
        for(int i=0;i<n;i++)
        {
            cin>>k[i];
        }
        // changing the bits into the same format 

        for(int i=0;i<n;i++)
        {
            int p=0;
            int q=0;
            p=k[i];
            for(int j=n-1;j>=0;j--)
            {
              q=p%10;
              a[i][j]=q;
              p=p/10;
            }
        }
        /**** COde get Extracted here by me *************/
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<a[i][j];
        //     }
        //     cout<<endl;
        // }
        int count =0;
        for(int i=0;i<n;i++)
        {   int x=0;
            for(int j=0;j<n;j++)
            {   x=n-1-j;
                if(j<=x)
                {
                    if(a[j][i]==a[x][i])
                    {
                      count++;      
                    }
                }
            }
        }
        if(count==n*(n+1)/2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<count<<endl;

    }
       //Reading input from STDIN
	
    // cout << "Input number is " << num << endl;	// Writing output to STDOUT
    return 0;
}

// https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/
