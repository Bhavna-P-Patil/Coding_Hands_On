#include <iostream>
using namespace std;

class Demo
{
public:
    int  a;
private:
    int  b;
protected:
    int  c;

public:
    Demo(int i, int j, int k)
    {
        cout<<"Constructor\n";
        a =i;
        b = j;
        c = k;
    }
    void fun()// void fun(Demo * const this)
    {
        cout<<"Value of a "<<this->a<<"\n";//10
        cout<<"Value of b "<<this->b<<"\n";//20
        cout<<"Value of c "<<this->c<<"\n";//30
    }
};
int main()
{
    cout<<"Inside main\n";
    Demo * p = new Demo(10,20,30);
    cout<<"Value of a : "<<p->a<<"\n";
   // cout<<"Value of b : "<<p->b<<"\n";
   // cout<<"Value of c : "<<p->c<<"\n";
    p->fun();   // fun(p);      fun(100);
    return 0;
}
