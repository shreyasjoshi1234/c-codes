/*
Assignment 1
5. Write the definition for a class called array, with private members (a[], size) and public members :
setNumbers()
showNumbers()
sort()
(i) Write the definitions for each of the above member functions. (ii) create one object of array class in the main function.
(iii) invoke all functions.
*/

#include<iostream>
using namespace std;

class array
{
    int size,n=10;//Temp size 10
    int a[10];
    public:
    void setnum()
    {
        int i;
        cout<<"Enter 10 numbers to set in array : ";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void shownum()//prints array 
    {
        int i;
        cout<<endl<<"Array numbers : ";
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    void sort()//sort
    {
        int i,j,temp;
        for(i=0;i<=n-2;i++)
        {
            for(j=0;j<=n-2;j++)
            {
                if(a[j]>a[j+1])
                {
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
                }
            }
        }
    }
};

int main()
{
    array ob1;
    ob1.setnum();
    ob1.sort();
    ob1.shownum();
}