/*

12345
1234
123
12
1

*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i+1);j++)
        cout<<j;
        cout<<"\n";
    }   
}