#include<iostream>
#define max 100
using namespace std;
class Stack
{
    int top;
    char arr[max];
    public:
        Stack()
        {
            top=-1;
        }
        void push(char x)
        {
            if(top>=max-1)
                cout<<"Stack Overflow.";
            else
            {
                arr[++top]=x;

            }
        }
        char  pop()
        {
            if(top==-1)
            {
                return 0;
            }
            else
            {
              char y=arr[top];
              arr[top]=NULL;
              top--;
              return y;
              
            }
        }
        int stackfull()
        {
            if(top==max-1)
                return 1;
            else
               return 0;
        }
        int stackempty()
        {
            if(top==-1)
                return 1;
            else
                return 0;
        }
        int icp(char ch)
        {
            if(ch=='+'|| ch=='-')
                return 1;
            if(ch=='*'|| ch=='/')
                return 2;
            if(ch=='^')
                return 4;
            if(ch=='(')
                return 5;
        }
        int isp(char ch)
        {
            if(ch=='+'|| ch=='-')
                return 1;
            if(ch=='*' || ch=='/')
                return 2;
            if(ch=='^')
                return 3;
            if(ch=='(')
                return 0;
            if(ch=='*')
                return -1;
        }
        char stacktop()
        {
            if(top==-1)
                return 0;
            else
                return arr[top];
        }
        void inttopstfix(char exp[])
        {
            push('#');
            int i=0;
            while(exp[i]!='\0')
            {
                if(exp[i]=='(')
                {
                    push('(');
                }
                else
                {
                    if(isalnum(exp[i]))
                        cout<<"\t"<<exp[i];
                    else
                    {
                        if(exp[i]==')')
                        {
                            while(stacktop()!='(')
                            {
                               cout<<"\t"<<pop();
                               pop();
                            }
                        }
                        else
                        {
                            while(isp(stacktop())>=icp(exp[i]))
                            {
                                cout<<pop();
                            }
                             pop();
                        push(exp[i]);
                        }
                    }
                }
            i++;
            }
            while(stacktop()!='#')
            {
                    pop();
            }
        }
};
main()
{
    Stack s;
    char exp[20];
    cout<<"\n eneter the expression:";
    cin>>exp;
    s.inttopstfix(exp);
}
