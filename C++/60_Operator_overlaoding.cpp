#include<iostream>
using namespace std;
class op
{
    int x;
    public:
op operator+ (const op ob1)
{
    op temp;
    temp.x=ob1.x+x;
    cout<<"Operator overloaded "<<x<<endl;
    return temp;
}

void set(int a)
{
    x=a;
}

void print()
{
    cout<<x<<endl;
}

};
//Whenever a binary operator is overloaded only one object is passed as parameter because the ob on left will call the function and right ob is passed as parameter
int main()
{
    op a,b,c;
    a.set(1);
    b.set(55);
    c=b+a;//This(b) calls the operator function and a is passed as parameters 
    c.print(); 
}