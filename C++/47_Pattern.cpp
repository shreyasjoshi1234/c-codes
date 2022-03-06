/*
A B C
B C D
C D E
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
        ch=ch+i-1;
        for(j=1;j<=n;j++)
        {
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
}