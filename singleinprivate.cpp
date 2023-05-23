#include<iostream>
using namespace std;
class Base
{
    private:
        int a;
    public:
        int b;
        void getab()
        {
            cout<<"\n enter the values of a and b:";
            cin>>a>>b;
        }
        int geta()
        {
            return a;
        }

};
class Derived:private Base
{
    private:
        int c;
    public:
        void mul()
        {
            getab();
            c= geta()*b;
        }
        void display()
        {
            cout<<"\n the value of a is:"<<geta();
            cout<<"\n the value of b is:"<<b;
            cout<<"\n the value of c is:"<<c;
        }
};
main()
{
    Derived d;
    d.mul();
    d.display();
}
