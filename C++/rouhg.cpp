//MULTI LEVEL INHERITANCE
#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		A()
		{
			x=100;
		}
		A(int l)
		{
			x=l;
		}
		void display()
		{
			cout<<"x="<<x<<endl;
		}
};

class B:public A
{
	int y;
	public:
		B()
		{
			y=200;
		}
		B(int m,int n):A(n)
		{
			y=m;
		}
		void display()
		{
			cout<<"y="<<y<<endl;
			
		}
};

class C:public B
{
	int z;
	public:
		C()
		{
			z=300;
		}
		C(int i,int j,int k):B(j,k)
		{
			z=i;
		}
		void show()
		{
			cout<<"z="<<z<<endl;
			display();   
		}
};

int main()
{
	C ob1(1,2,3);//creating object with parameterised constructor
	ob1.show();
	
	C ob2;
	ob2.show();//creating object with default constructor
}
