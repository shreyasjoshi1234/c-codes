#include<iostream>
using namespace std;

class list
{
    //Private mambers(By default)
    int arr[10];
    int size=10;
    public:
    void setdata()//To initialize array
    {
        int i;
        cout<<"Enter array values"<<endl;
        for(i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    void findsum()
    {
        int i,sum;
        sum=0;
        for(i=0;i<size;i++)
        {
            sum=sum+arr[i];
        }
        cout<<endl<<"Sum : "<<sum;
    }

    void findmax()
    {
        int i,max;
        max=arr[0];
        for(i=1;i<size;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        cout<<endl<<"Max : "<<max;
    }

    void findmin()
    {
        int i,min;
        min=arr[0];
        for(i=1;i<size;i++)
        {
            if(min>arr[i])
            {
                min=arr[i];
            }
        }
        cout<<endl<<"Min : "<<min;
    }
    void printoccurance()
    {
        int i,k=0,j,a[size],b[size],c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,count=0,temp;
        for(i=0;i<size;i++,k++)
        {   
            a[i]=0;
            for(j=0;j<=size;j++)
            {
                if(arr[i]==arr[j])
                a[i]++;
            }  
        }
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                    if(arr[i]==arr[j])
                    {
                        for(k=1;k<size;k++)
                        if(a[i]!=a[k])
                        cout<<a[i]<<endl;
                    }
            }
        }
        cout<<endl<<"Occurances :"<<endl;
        // for(i=0;i<size;i++)
        // {
        //   cout<<endl<<arr[i]<<" --> "<<a[i];
        // }
    
    }
};

int main()
{
    list ob;
    ob.setdata();
    ob.findsum();
    ob.findmax();
    ob.findmin();
    ob.printoccurance();
    return 0;
}