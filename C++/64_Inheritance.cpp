//Hirarchical inheritance  

#include<iostream>
using namespace std;


class BASE
{
    int x,y;
    void displaypri()
    {
        cout<<endl<<"Hello base pri";
    }
    protected:
    int a,b;
    void displaypro()
    {
        cout<<endl<<"Hello base pro";
    }
    public:
    int p,q;
    void displaypub()
    {
        cout<<endl<<"Hello base pub";
    }
};

class B:private BASE
{
    //It is derived as private and hence 
    //private : a,b,displaypro,p,q,displaypub
    //protected : NULL
    //public : NULL

};

class C:protected BASE
{
    //It is derived as protected and hence 
    //private : NULL
    //protected : a,b,displaypro,p,q,displaypub
    //public : NULL

};

class D:public BASE
{
    //It is derived as public and hence 
    //private : NULL
    //protected : a,b,displaypro
    //public : p,q,displaypub

};

int main()
{
    BASE x1;
    B x2;
    C x3;
    D x4;

}