#include<iostream>
using namespace std;

class point
{
    int x,y;
    public:
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    //Don't expect the function to xch values of ob1 and ob2
    //Because the calling object values can be modified 
    //but the object which is passed as parameter is call by values and the changes amde on will not be reflected.
    //If you want to exchange pass it as refrence or use copy constructor 
    
    void exchange(point ob2)
    {
        //Exchange x
        int temp;
        temp=ob2.x;
        ob2.x=x;
        x=temp;
        //Exchange y
        temp=ob2.y;
        ob2.y=y;
        y=temp;
    }
    
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }

};

int main()
{
    point ob1(100,200),ob2(2,1);
    ob1.print();
    ob2.print();
    ob2.exchange(ob1);
    ob1.print();
    ob2.print();
}