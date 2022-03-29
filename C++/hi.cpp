#include<iostream>
#include<iomanip>
using namespace std;
class bike
{
    int cc,max_speed;
    string company;
    float price;
    long int running_km;
    public:

    bike(int c=100,int p=100000,int max=100,string com="Name 1",int km=0)
    {
        running_km=km;
        cc=c;
        max_speed=max;
        price=p;
        company=com;
    }
    void drive(int speedn,int timem)
    {
        running_km=speedn*timem;
    }
    void drivebike(bike ob[],int size,int speed[],int min[])
    {
        for(int i=0;i<size;i++)
        ob[i].running_km=ob[i].running_km+(speed[i]*min[i]);
    }
    int getkm()
    {
        return running_km;
    }
};
int main()
{
    int size;
    cout<<"Enter number of bikes"<<endl;
    cin>>size;
    bike ob[size];
    int speed[size],min[size];
    cout<<"Enter speed time"<<endl;
    //Updating running_km by using drive function
    /*
    for(int i=0;i<size;i++){
    cin>>speed[i]>>min[i];
    ob[i].drive(speed[i],min[i]);
    }
    for(int i=0;i<size;i++)
    {
        cout<<endl<<"-> "<<ob[i].getkm();
    }
    */
    //Updating running km through drivebike
    for(int i=0;i<size;i++)
    {
        cin>>speed[i]>>min[i];
    }
    ob[0].drivebike(ob,size,speed,min);
    //printing running km
    for(int i=0;i<size;i++)
    {
        cout<<endl<<"-> "<<ob[i].getkm();
    }
int Total_km=0; 
for(int i=0;i<size;i++)
{
   Total_km =Total_km+ob[i].getkm();
}
cout<<endl<<“Total km ”<<Total_km;
}