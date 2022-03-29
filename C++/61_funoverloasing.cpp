#include<iostream>
using namespace std;


int findmin(int arr[],int n)
{
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}

float findmin(float arr[],int n)
{
    float min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
   }
   return min;
}

int findMax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

float findmax(float arr[],int n)
{
    float max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
        return max;
}

int findsum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

float findsum(float arr[],int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}


void sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=(n-2);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j]=temp;
            }
        }
    }
    cout<<endl<<"Array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    cout<<"Enter integer array elements"<<endl;
    int n=10;
    int arr[n];
    float arrf[n],tempf;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter floating array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arrf[i];
    }
    int temp=findMax(arr,n);
    cout<<endl<<"Max : "<<temp;
    temp=findmin(arr,n);
    cout<<endl<<"Min : "<<temp;
    tempf=findmin(arrf,n);
    cout<<endl<<"Min : "<<tempf;
    tempf=findmax(arrf,n);
    cout<<endl<<"Max : "<<tempf;
        

}