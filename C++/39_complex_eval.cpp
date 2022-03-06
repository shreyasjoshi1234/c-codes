#include<iostream>
using namespace std;

class complex
{
    int real,imz;
    public:
    complex(int a,int b)//Parametrized Constructor
    {
        real=a;
        imz=b;
    }

    void subtraction(complex ob1,complex ob2)
    {
       real=ob1.real-ob2.real;
       imz=ob1.imz-ob2.imz;
    }  

    void multiplication(complex ob1,complex ob2)
    {
        real=(ob1.real*ob2.real)-(ob1.imz*ob2.imz);
        imz=(ob1.real*ob2.imz)+(ob1.imz*ob2.real);
    }

    void print()
    {
        cout<<endl<<"Real : "<<real<<" Imz : "<<imz;
    }
};

int main()
{
    complex ob1(1,1),ob2(2,2),ob3(3,3);//These calls the parametrized constructor which will assign values
    ob3.subtraction(ob1,ob2);//Difference ob ob1 and ob2 will be in ob3
    ob3.print();
    ob3.multiplication(ob1,ob2);//product of ob1 and ob2 will be in ob3
    ob3.print();
    return 0;
}