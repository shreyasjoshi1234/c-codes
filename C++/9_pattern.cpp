/*

11111
2222
333
22
1

*/
//Its not completed 

#include<iostream>
using namespace std;


int main()
{
    int i,j,k,n=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n-i);j++)
        cout<<i;
        cout<<"\n";
    }
}