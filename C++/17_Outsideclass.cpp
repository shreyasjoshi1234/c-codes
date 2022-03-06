//Declaring a function inside a class and defining it outside the class

#include<iostream>
using namespace std;


class com
{
    private:
    int x;
    int y;
    public:
    void set(int i,int j);
    void print();
};

void com::set(int i,int j)
{
    x=i;
    y=j;
}

void com::print()
    {
        if(y<0)
        cout<<"Complex number is = "<<x<<y<<"j";
        else
        cout<<"Complex number is = "<<x<<"+"<<y<<"j";
    }

int main()
{
    int x,y;
    cout<<"\nEnter x and y\n";
    cin>>x>>y;
    com ob1;
    ob1.set(x,y);
    ob1.print();
}