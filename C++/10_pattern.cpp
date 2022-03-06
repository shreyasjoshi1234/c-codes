/*

1
12
123
1234
122345

*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        cout<<j;
        cout<<"\n";
    }
}