//Constructors

#include<iostream>
using namespace std;

class com
{
    int x,y;
    public:
    com()
    {
        x=11;
        y=11;
    }
    void print(int a,int b)
    {
        if(y<0)
        cout<<"Complex number is = "<<x<<y<<"j";
        else
        cout<<"Complex number is = "<<x<<"+"<<y<<"j";
    }
};

int main()
{
    int x,y;
    cout<<"\nEnter x and y\n";
    cin>>x>>y;
    com ob1;
    ob1.print(x,y);
}