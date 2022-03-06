/*
Assignment 1
4. Write the definition for a class called time, with private members : int h,m,s and public members:
setTime()
showTime()
addTime()
 add()
 */

#include<iostream>
using namespace std;


class time
{
    int h,m,s;
    public:
    void settime(int a,int b,int c)
    {
        h=a;
        m=b;
        s=c;

    }
    void showtime()
    {
        cout<<"Current time :"<<endl<<h<<m<<s<<endl;
    }
    void addtime(int a,int b,int c)
    {
        s=s+c;
        m=m+b;
        h=h+a;
        cout<<"Sum : "<<endl<<h<<m<<s<<endl;
    }
    void add()
    {

    }
};

int main()
{
    time ob1,ob2,ob3;
    int a,b,c;
    cout<<"Enter time to set : ";
    cin>>a>>b>>c;
    ob1.settime(a,b,c);
    ob1.showtime();
    cout<<"Enter time to add : ";
    cin>>a>>b>>c;
    ob1.addtime(a,b,c);
}