#include <iostream>
using namespace std;

class Demo
{
private:
    int no1;
    int no2;
public:
    Demo()
    {
        cout<<"Default\n";
        no1 = 0;
        no2 = 0;
    }
    Demo(int x, int y)
    {
        cout<<"Parametrised\n";
        no1 = x;
        no2 = y;
    }
    Demo(Demo &ref)
    {
        cout<<"Copy";
        no1 = ref.no1;
        no2 = ref.no2;
    }
    ~Demo()
    {
        cout<<"Destructor\n";
    }
};
int main()
{
    Demo obj1;
    Demo obj2(10,20);
    Demo obj3(obj2);
    return 0;
}



int i = (10,20,30,40);
int j = 10,20,30,40;

int arr[] = {10,20,30,40};
fun(10,20,30);
