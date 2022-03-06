//Use class to assign and print complex numbers

#include<iostream>
using namespace std;

class com
{
    int x,y;
    public:
    void print(int a,int b)
    {
        x=a;
        y=b;
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