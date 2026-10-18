/*

pattern:
*
**
***
****
*****

*/

#include<bits/stdc++.h>
using namespace std;    

void print2(int n){                 
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<< "* ";
        }
        cout<<endl;
    }                 
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<< "* ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cout<<"Enter number of test cases: ";
    cin>> t;
    for(int i=0;i<t;i++)
    {
        cout<<"Enter the value of n: ";
        int n;
        cin>>n;
        print2(n);
    }
}