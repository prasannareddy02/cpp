#include <iostream>
using namespace std;
class complex
{
    float x,y;
    public:
    complex()
    {
        
    }
    complex(float real,float img)
    {
        x=real;
        y=img;
    }
    complex operator +(complex c)

    
    {
        complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
    void display()
    {
        cout<<x<<"+i"<<y<<"\n";
    }
};
main()
{   
    float a,b,c,d;
    cout<<" enter 2 complex numbers";
    cin>>a>>b>>c>>d;
    complex c1,c2,c3;
    c1=complex(a,b);
    c2=complex(c,d);
    c3=c1+c2;
    cout<<"\n c1= ";
    c1.display();
    cout<<"\n c2= ";
    c2.display();
    cout<<"\n c3= ";
    c3.display();
}