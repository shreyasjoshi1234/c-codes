/*
D
C D
B C D
A B C D
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    char ch='A';
    cout<<"Enter n : ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        ch='A';
        ch=ch+i-1;
        for(j=1;j<=n-i+1;j++)
        {
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
}