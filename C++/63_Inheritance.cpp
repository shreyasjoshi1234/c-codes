//Single inheritance

#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A()
    {
        a=100;
        cout<<endl<<"Base constructor default";
    }
    A(int a)
    {
        cout<<endl<<"Base constructor parametarized";
        this->a=a;
    }
    ~A()
    {
        cout<<endl<<"Base destructor";
    }
    void seta(int a)
    {
        this->a=a;
    }
    int geta()
    {
        return a;
    }
};

class B : public A
{

    int b;
    public:
    B():A()
    {
        cout<<endl<<"Derived constructor default";
        b=111;
    }
      B(int b):A(b)
    {
        cout<<endl<<"Derived constructor parametarized";
        this->b=b;
    }
    ~B()
    {
        cout<<endl<<"Derived destructor";
    }
    int getb()
    {
        return b;
    }
};

int main()
{
    int n;
    B ob(100);
    // n=ob.geta();
    // cout<<endl<<n;
    // n=ob.getb();
    // cout<<endl<<n;
}

//If I have inheritance of two classes as wrote above we have 4 possibilities of calling constructors

// Derived :parmeterized will call Derived :parmeterized
// Derived :unparmeterized will callDerived :unparmeterized
// Derived :parmeterized will call Base :unparmeterized
// Derived :unparmeterized will call Base :parmeterized