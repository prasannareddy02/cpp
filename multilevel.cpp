#include<iostream>
using namespace std;
class student
{
    protected:
        int rno;
        char name[20];
    public:
        void getdetails()
        {
            cout<<"\n enter the rollnumber and name of the student:";
            cin>>rno>>name;
        }
        void putdetails()
        {
            cout<<"\n rollnumber"<<rno<<"name"<<name;
        }
};
class marks:public student
{
    protected:
        float s1,s2;
    public:
        void getmarks()
        {
            cout<<"\n enter the marks of two subjects:";
            cin>>s1>>s2;
        }
        void putmarks()
        {
            cout<<"\n the subject marks are:"<<s1<<" "<<s2;
        }
};
class test:public marks
{
    private:
        float total;
    public:
        void result()
        {
            total=s1+s2;
        }
        void display()
        {
            cout<<"\n the result is:"<<total;
        }
};
main()
{
    test t;
    t.getdetails();
    t.putdetails();
    t.getmarks();
    t.putmarks();
    t.result();
    t.display();
}