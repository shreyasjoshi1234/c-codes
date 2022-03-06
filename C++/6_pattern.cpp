/*

*********
*********
*********
   ***
   ***
   ***
   ***
   ***
   ***
   ***
   ***
   ***

   */

#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n*n);j++)
        cout<<"*";
        cout<<"\n";
    }
    for(i=i;i<=(n*n);i++)
    {
        for(j=1;j<=(n*n-n)/2;j++)
        cout<<" ";
        for(k=1;k<=n;k++)
        cout<<"*";
        cout<<"\n";
    }
}