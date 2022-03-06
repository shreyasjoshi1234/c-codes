#include<iostream>
using namespace std;


class abc
{
    private:
    int x;
    public:
    void setx(int i)
    {
        x=i;
    }
    void getx()
    {
        cout<<"Value of x is "<<x<<endl;
    }
};

int main()
{
    int i;
    abc ob1;
    ob1.setx(100);
    ob1.getx();
    //ob1.y=11; It is private hence cannot be accsessed
    return 0;

}