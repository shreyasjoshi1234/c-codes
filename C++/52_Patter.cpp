/*
      1
    121
   12321
1234321
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        cout<<k;
        for(k=k-2;k>=1;k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
}