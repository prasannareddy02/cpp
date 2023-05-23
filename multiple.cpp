#include<iostream>
using namespace std;
class Base1
{
    protected:
        int m;
    public:
        void getm(int x)
        {
            m=x;
        }
};
class Base2
{
    protected:
        int n;
    public:
        void getn(int y)
        {
            n=y;
        }
};
class derived:public Base1,public Base2
{   
    public:
        void display()
        {
            cout<<"\n the value of m:"<<m;
            cout<<"\n the value of n:"<<n;
            cout<<"\n the result is:"<<m*n;
        }
};
main()
{
    int x,y;
    derived d;
    cout<<"\n enter the value of x:";
    cin>>x;
    d.getm(x);
    cout<<"\n enter the value of y:";
    cin>>y;
    d.getn(y);
    d.display();
}