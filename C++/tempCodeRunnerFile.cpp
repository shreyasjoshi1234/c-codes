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

int sta :: x=0;
int main()