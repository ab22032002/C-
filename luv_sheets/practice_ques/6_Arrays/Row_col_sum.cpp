#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        // code here
        int k =0;
        // if(N>M)
        // {
        //     k=M;
        // }
        // else
        //   k=N;
        k=min(N,M);
        int rowsum[k],columnsum[k],Rsum=0,Csum=0;
        for(int i=0;i<k;i++)
        { 
            for(int j=0;j<k;j++)
                {
                    Rsum+=A[i][j];
                    Csum+=A[j][i];
                }
            rowsum[i]=Rsum;
            // columnsum[i]=Csum;
        }
         for(int j=0;j<k;j++)
         { 
             for(int i=0;i<k;i++)
                 Rsum+=A[i][j];
             columnsum[j]=Csum;    
         }
        for(int i=0;i<k;i++)
        {
            if(columnsum[i]!=rowsum[i])
            {
                return 0;
            }
        }
        return 1;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,M;
        cin>>N>>M;
        vector<vector<int>> A(N,vector<int>(M));
        for(int i=0;i<N;i++)
           for(int j=0;j<M;j++) cin>>A[i][j];
        Solution ob;
        cout<<ob.sumOfRowCol(N,M,A)<<"\n";
    }
}
//https://practice.geeksforgeeks.org/problems/sums-of-i-th-row-and-i-th-column3054/1#