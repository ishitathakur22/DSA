/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1

12

123

1234

12345

Print the pattern in the function given to you.
*/

#include<bits/stdc++.h>
using namespace std;    

class Solution {
public:
    void pattern3(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<"";
            }
            cout<<endl;
        }

    }
};

int main(){
    int t;
    cout<<"Enter number of test cases: ";
    cin>> t;
    Solution obj;              // object banaya
    for(int i=0;i<t;i++)
    {
        cout<<"Enter the value of n: ";
        int n;
        cin>>n;
        obj.pattern3(n);       // object ke through call
    }
}