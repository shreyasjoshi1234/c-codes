#include<iostream>
using namespace std;
//How to access varibles of one cals  in another
class point
{
    int x,y;
    public:
    point(int a,int b)
    {
        x=a;
        y=b;
    }
};

class line
{
    point ob1,ob2;
};

int main()
{
    point ob1(100,200),ob2(2,1); 
}
