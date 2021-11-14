#include <iostream>
#include<stdlib.h>
using namespace std;

class Demo
{
public:
    int no1;
    int no2;

    Demo()
    {
        cout<<"Constructor\n";
    }
    ~Demo()
    {
        cout<<"Destructructor\n";
    }
    void fun(int X) // void fun(Demo *const this, int X)
    {
        cout<<"inside fun()";
    }
};

int main()
{
    // Demo obj;        static memory
    Demo *p = NULL;
    //p = (Demo *)malloc(sizeof(Demo));
    //free(p);
    
    p = new Demo;   // p = new Demo(10,20);
    cout<<p->no1;
    p->fun(11);     // fun(p,11)        fun(100,11);
    delete p;
    
    return 0;
}


int *p = new int;
*p = 4;

int *p = new int(4);

int *q = new int[4];
