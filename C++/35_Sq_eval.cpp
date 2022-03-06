#include<iostream>
using namespace std;

class square
{
    int side;
    public:
    square()
    {
        //Default st side as required value
        side=1;
    }
    square(double a)
    {
        side=a;
    }
    void setside(double a)
    {
        side=a;
    }
    void findperimeter()
    {
        float p;
        p=4*side;
        cout<<"Perimeter : "<<p;
    }
    void findarea()
    {
        float a;
        a=side*side;
        cout<<"Area : "<<a;
    }
};

int main()
{
    square ob1,ob2(11);
    
}