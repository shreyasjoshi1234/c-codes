#include<iostream>
using namespace std;

void readarray1(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int arr[10];
    cout<<"Enter array elements"<<endl;
    readarray1(arr,10);
    cout<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<endl;
    }
}

