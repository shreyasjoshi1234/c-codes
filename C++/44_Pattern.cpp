/*
1
2 3
3 4 5
4 5 6 7
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
        for(j=i;j<=(2*i-1);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}