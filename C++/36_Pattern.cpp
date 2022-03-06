#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter n : ";
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}