#include<iostream>
using namespace std;

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
    cl(cl &ob1)
    {
        p=new int[2];
        p[0]=ob1.p[0];
        p[1]=ob1.p[1];
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
    cl ob2=ob1;//It calls our copy constructor and ob1 is passed as parameter
    ob2.printval();
    ob1.setval(100,200);//Changing values in ob1
    ob1.printval();
    ob2.printval();
}