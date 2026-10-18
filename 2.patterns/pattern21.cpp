
/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****
*   *
*   *
*   *
*****
Print the pattern in the function given to you.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void pattern21(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == 1 || i == n || j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    Solution obj;
    obj.pattern21(n);

    return 0;
}
