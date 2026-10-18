/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
Print the pattern in the function given to you.
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern17(int n) {
        for (int i = 1; i <= n; i++) {
            char ch = 'A';
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= i; j++) {
                cout << ch;
                ch++;
            }
            ch -= 2;
            for (int j = 1; j <= i - 1; j++) {
                cout << ch;
                ch--;
            }
            cout << endl;
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
        obj.pattern17(n);
    }
}