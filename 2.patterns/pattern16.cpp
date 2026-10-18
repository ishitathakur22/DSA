/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

A

BB

CCC

DDDD

EEEEE

Print the pattern in the function given to you
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern16(int n) {
        char ch = 'A';
        for(int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){
                cout<<ch;
            }
            cout<<endl;
            ch++;
        }

    }
};

int main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    Solution obj;
    for (int i = 0; i < t; i++)
    {
        cout << "Enter the value of n: ";
        int n;
        cin >> n;
        obj.pattern16(n);
    }
}