/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here 
// code is wowrking but the editor isnt responding in appropriate manner for this particular code 
#include<bits/stdc++.h>
using namespace std;
int main()
{ string str,rev;
  cout<<"enter your string"<<endl;
  getline(cin,str);
  for(int i= str.size()-1;i>=0;i--)
    rev=rev+str[i];
  cout<<rev<<endl;
  if(str==rev)
  {
      cout<<"yes";
  }
 else
 cout<<"no";
 return 0;
}

// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
// https://practice.geeksforgeeks.org/problems/remove-character3815/1 this is one of the difficults 