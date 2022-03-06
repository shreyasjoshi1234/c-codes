#include<iostream>
using namespace std;

class stack
{
    private:
    int item[100],size=0,top=-1;
    public:
    void push(int a);
    void pop();
    void show();
};
void stack::push(int a)
{
    top++;
    size++;
    item[top]=a;
}
void stack::pop()
{
    if(top==-1)
        cout<<"Stack doesn't contain any elements\n";
    else
    {
        int a;
        a=item[top];
        top--;
        size--;
        cout<<"\nThe item poppped was:"<<a<<endl;
    }
}
void stack::show()
{
    int t=top;
    if(t==-1)
        cout<<"Stack doesn't contain any elements\n";
    else
    {
        cout<<"\nSize of the stack : "<<size<<endl;
        cout<<"\nThe elements in the stack are:\n"<<endl;
        while(t!=-1)
        {
            cout<<t<<"--->"<<item[t]<<"\n"<<endl;
            t--;
        }
    }
}

int main()
{
    int c,a;
    stack x;
    do
    {
        cout<<"\nEnter your choice\n"<<endl;
        cout<<"1.Push\n";
        cout<<"2.Pop\n";
        cout<<"3.Display\n";
        cout<<"0.Exit\n";
        cin>>c;
        switch (c)
        {
        case 1:
            cout<<"\nEnter the number to push:"<<endl;
            cin>>a;
            x.push(a);
            break;
        case 2:
            x.pop();
            break;
        case 3:
            x.show();
            break;
        case 0:
            exit(1);
            break;
        default:
            cout<<"Please try to enter a valid option\n"<<endl;
            break;
        }

    } while (c!=0);
    
}