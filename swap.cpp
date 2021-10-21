#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
    {
        int a,b;
        cout<<"enter 2 numbers"<<endl;
        cin>>a>>b;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"output is"<<a<<"\t"<<b<<endl;
        getch();
    }
