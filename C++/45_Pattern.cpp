/*
A A A
B B B
C C C
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    char ch='A';
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<ch<<" ";
        }
        ch=ch+1;
        cout<<endl;
    }
}