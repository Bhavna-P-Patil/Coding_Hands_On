#include <iostream>
using namespace std;

class Demo
{
public:
    int Addition(int ino1, int ino2)    // Addition@2ii     1000
    {
        return ino1+ino2;
    }
    
    int Addition(int ino1, int ino2, int ino3)  // Addition@3iii
    {
        return ino1+ino2+ino3;
    }
    
    int Addition(int ino1, int ino2, int ino3,int ino4)  // Addition@4iiii
    {
        return ino1+ino2+ino3+ino4;
    }
};
int main()
{
    Demo obj;
    int iret =0;
    
    iret = obj.Addition(10,20); // Addition@2ii(&obj,10,20)     CALL 1000       11      1000        1011    101011010011
    cout<<iret;
    
    iret = obj.Addition(10,20,30);  // Addition@3iii(&obj,10,20,30)
    cout<<iret;
    
    iret = obj.Addition(10,20,30,40);   // Addition@4iiii(&obj,10,20,30,40)   .
    cout<<iret;
    return 0;
}



//////////////////////////////////////////////////
// Number of arguments
void fun(int i, int j){}                // fun@2ii
void fun(int i, int j, int k){}     // fun@3iii

//////////////////////////////////////////////////
// Datatype of arguments
void fun(int i, int j){}             // fun@2ii
void fun(double i, double j){}  // fun@2dd

//////////////////////////////////////////////////
// Sequance of arguments
void fun(int i, double j){}     // fun@2id
void fun(double i, int j){}     // fun@2di

//////////////////////////////////////////////////
// Return value
int fun(int i, int j){}                 // fun@2ii
double fun(int i, int j){}          // fun@2ii
