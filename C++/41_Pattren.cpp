/*
1 2 3
4 5 6
7 8 9
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=((i-1)*n)+1;j<=(i*n);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}