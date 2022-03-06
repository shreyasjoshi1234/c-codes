/*
Assignment 1
1. Write the definition for a class called complex, with private members:
(real,imz) and public members :
print()
complex add(complex)
complex sub(complex)
(i) Write the definitions for each of the above member functions.
(ii) create three objects of complex class in the main function
(iii) invoke add and sum functions
*/

#include<iostream>
using namespace std;

class complex
{
    int real,imz;
    public:
    void setcomplex(int a,int b)//Setter
    {
        real=a;
        imz=b;
    }
    complex add(complex ob)
    {
        complex tempob;//Here we are adding two complex numbers one is got by parameter 'ob'
        tempob.real=real+ob.real;//and another is of calling object 'real and imz' 
        tempob.imz=imz+ob.imz;//whose sum is stored in temp ob and is returned 
        return tempob;
    }  
    void sub(complex ob)
    {
        real=real-ob.real;
        imz=imz-ob.imz;
    }   
    void print()
    {
        cout<<endl<<"Real : "<<real<<" Imz : "<<imz;
    }
};

int main()
{
    complex ob1,ob2,ob3;
    int a,b;
    cout<<"Enter complex number : ";
    cin>>a>>b;
    ob1.setcomplex(a,b);
    cout<<"Enter complex number : ";
    cin>>a>>b;
    ob2.setcomplex(a,b);
    ob3=ob1.add(ob2);//We are calling add funcion using ob1 hence its variable can be accessed directly and ob2 is passed as parameter and its sum is returned in ob3
    ob3.print();//Alternatively two obs can be passed and ans can be stored in calling ob.

}