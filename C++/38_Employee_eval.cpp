#include<iostream>
using namespace std;

class employee//Class
{
    //private members(By default)
    int hour,rate,wage;
    string name;
    public:
    void setdata(string str,int h,int r)//To set data
    {
        name=str;
        hour=h;
        rate=r;
    }

    void calculatewage()//Total wage calculated by rate per hour
    {
        wage=hour*rate;
    }

    void printdata()
    {
        cout<<endl<<" Name : "<<name<<endl<<" Hours : "<<hour<<endl<<" Rate  : "<<rate<<endl<<" Total wage : "<<wage;
    }
};

int main()
{
    employee ob;//Object of class employee
    int h,r;
    string name;
    cout<<"Enter details"<<endl;
    cin>>name>>h>>r;//Taking input from user
    ob.setdata(name,h,r);
    ob.calculatewage();
    ob.printdata();
    return 0;
}