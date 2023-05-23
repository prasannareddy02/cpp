#include<iostream>
using namespace std;
class  Space
{
    int x,y,z;
    public:
        void getdata(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        void display()
        {
            cout<<"\n x= "<<x;
            cout<<"\n y= "<<y;
            cout<<"\n z="<<z;
        }
        void operator-()
        {
            x=-x;
            y=-y;
            z=-z;
        }
};
main()
{
    Space s;
    s.getdata(5,4,-7);
    s.display();
    -s;
    cout<<"\n -s";
    s.display();
}
