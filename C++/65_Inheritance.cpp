//Multiple inheritance
#include<iostream>
using namespace std;

class A
{
    public:
    int x;
     void display()
    {
        cout<<"\nClass A";
    }
};

class B
{
    public:
    int x;
    void display()
    {
        cout<<"\nClass B";
    }
    
};

class C:public A,public B
{
    public:
    int x;
    void show()
    {
        A::display();
        B::display();
    }
};

int main()
{
    C ob;
    ob.A::x=100;
    // ob.A::display();

}