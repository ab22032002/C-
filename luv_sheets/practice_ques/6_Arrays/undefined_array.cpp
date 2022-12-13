#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    a[11]=90;
    cout<<a[10];
    cout<<a[11]; // SEGMENTATION error
    // // ye chal to gaya par ye undefined behaviour hai !!!!!!!!
    // copies of an array :::;
   
    // int x;
    // cin>>x;
    // int x[5] ;   // collection of 5 elemnts of the array 
    // int x[5][3]; // collection of 5*3 as here  
    // int x[5][3][2]; // collection of 2 of 5*3 array 
    int i,j;
    cin>>i>>j;
    int k[i][j];
    for(int l=0;l<i;l++)
    {
        for(int m=0;m<j;m++)
        {
            cout<<k[l][m];
        }
        cout<<endl;
    }
    return 0;
// }
// ///// array limitz::::::::::::::
// // int arr[1e5]; //only 
// if arrray declaration have global declaration ::
// anf]d also every variable inside the array must be a constant variable 
// global size max ::  1e7;