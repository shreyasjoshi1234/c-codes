#include<iostream>
using namespace std;

class fraction
{
    int num,den;
    public:
    void setfraction(int a,int b)
    {
        num=a;
        den=b;
    }

    fraction reciprocal()
    {
        fraction temp1;
        temp1.num=den;
        temp1.den=num;
        return temp1;
    }

    void add(fraction ob1,fraction ob2)
    {
        num=(ob1.num*ob2.den)+(ob1.den*ob2.num);
        den=ob1.den*ob2.den;
    }

    void sub(fraction ob1,fraction ob2)
    {
        num=(ob1.num*ob2.den)-(ob1.den*ob2.num);
        den=ob1.den*ob2.den;
    }

    void print()
    {
        cout<<endl<<"Num : "<<num<<" Den : "<<den;
    }
};

int main()
{
    fraction ob1,ob2,ob3;
    ob1.setfraction(2,3);
    ob2.setfraction(4,5);
    ob3.setfraction(6,7);
    ob3=ob2.reciprocal();
    ob3.print();
    ob3.add(ob1,ob2);
    ob3.print();
    ob3.sub(ob1,ob2);
    ob3.print();
}