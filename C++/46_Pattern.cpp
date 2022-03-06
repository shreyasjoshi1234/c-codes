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
    char ch;
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=1;j<=n;j++)
        {
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
}