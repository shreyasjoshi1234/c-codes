
#include<iostream>
using namespace std;

class person
{
    int weight,height;
    public:
    void setweight(int w)
    {
        weight=w;
    }
     void setheight(int w)
    {
        height=w;
    }
     int getweight()
    {
        return weight;
    }
    int getheight()
    {
        return height;
    }
};

class student
{
    int marks;
    public:
    void setmarks(int m)
    {
        marks=m;
    }
    student()
    {
        marks=100;
    }
    int getmarks()
    {
        return marks;
    }
    person ob;
};




int main()
{
    int n;
    student obj[5];
    obj[0].ob.setheight(100000);
    n=obj[0].ob.getheight();
    obj[0].ob.setweight(10101);
    cout<<n<<endl;
    n=obj[0].ob.getweight();
    cout<<n<<endl;
    //obj[0].ob.height=100;
    return 0;
}