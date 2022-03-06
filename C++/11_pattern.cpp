/*

A
BB
CCC
DDDD
EEEEE

*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n=5;
    char ch=65;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch;
        }
        ch=ch+1;
        cout<<"\n";
    }
}