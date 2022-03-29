
#include<iostream>
using namespace std;


class hi
{
    public:
        int x,y;
    hi(const hi &ob1)
    {
        x=ob1.x;
        cout<<endl<<"sxbjkskvsv";

    }
    hi()
    {

    }
};

int main()
{
    hi ob1,ob2;
    ob1.x=100;
    ob1.y=200;
    ob2=ob1;
    cout<<ob2.x<<" "<<ob2.y;
}