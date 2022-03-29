#include<iostream>
using namespace std;

class sta
{
    static int x;
    public:
    sta()
    {
        x++;
        cout<<x<<endl;
    }
};

int sta :: x;

int main()
{
    sta ob1;
    sta ob2;
    sta ob3;
}