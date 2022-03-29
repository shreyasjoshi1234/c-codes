#include<iostream>
using namespace std;
//Here we are using by default copy constructor wihch will create problem ref 54 program for explicit copy constructor

class cl
{
    int *p;
    public:
    cl()
    {
        p=new int[2];
        p[0]=1;
        p[1]=2;
    }
    void setval(int a,int b)
    {
        p[0]=a;
        p[1]=b;
    }
    void printval()
    {
        cout<<endl<<p[0]<<" "<<p[1]<<endl;
    }
};

int main()
{
    cl ob1;
    ob1.printval();
    cl ob2=ob1;//By default copy constructor is called and it instead pf creating new memory it copies address and hence both objects will be accessing same memory to resolve that we create a copy constructor in which we will allocte new memory and copy values 
    ob2.printval();
    ob1.setval(100,200);
    ob1.printval();
    ob2.printval();
}