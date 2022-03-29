#include<iostream>
using namespace std;
//Function overloading can be achived by changing no of parameters or type of parameters.
//No use of changing or not changing the return type
int max=10;

int addarray(const int arr[],const int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

float addarray(float arr[],int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
void fillrand(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100;
    }
}

void fillrand(float arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100;
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    int *arr,x;
    float *arr1,y;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    arr=new int[n];
    arr1=new float[n];
    fillrand(arr,n);
    fillrand(arr1,n);
    printarray(arr,n);
    x=addarray(arr,n);
    y=addarray(arr1,n);
    cout<<"Sum of integer array "<<x<<endl;
    cout<<"Sum of float array "<<y<<endl;
}