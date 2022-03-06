/*
Assignment 1
2. Write the definition for a class called rectangle, with private members: (length, width) and public members:
setLength(float)
setWidth(float)
float perimeter() float Area()
void print()
(i) Write the definitions for each of the above member functions.
(ii) create three objects of rectangle class in the main function.
(iii) invoke all functions.
*/

#include<iostream>
using namespace std;


class rect
{
    private:
    int l,b,p,a;
    public:
        void setlen(float x)
        {
            l=x;
        }
        void setbre(float y)
        {
            b=y;
        }
    float perimeter()
    {
        p=2*(l+b);
        return p;
    }
    float area()
    {
        a=l*b;
        return a;
    }
    void print()
    {
        p=perimeter();//calls function perimeter
        a=area();//calls function area
        cout<<"Perimeter is "<<p<<endl;
        cout<<"Area is "<<a<<endl;
    }
};

int main()
{
    rect ob1,ob2,ob3;
    float x,y;
    cout<<"Enter p and a";
    cin>>x>>y;  
   ob1.setlen(x);
   ob1.setbre(y);
    ob1.print();
}