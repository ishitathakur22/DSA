/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    *
   ***
  *****
 *******
*********
Print the pattern in the function given to you.
*/

#include<bits/stdc++.h>
using namespace std;    

class Solution {
public:
    void pattern7(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1-i;j++){
                cout<<" ";
            }
            for(int k=0;k<2*i+1;k++){
                cout<<"*";
            }
            for(int m=0;m<n-1-i;m++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int t;
    cout<<"Enter number of test cases: ";
    cin>> t;
    Solution obj;              
    for(int i=0;i<t;i++)
    {
        cout<<"Enter the value of n: ";
        int n;
        cin>>n;
        obj.pattern7(n);        
    }
}