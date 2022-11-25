#include <iostream>
using namespace std;

int c = 34;
int main()
{
    // builtin datatypes
    // in order to use the global variable while having an already local existbile variable we you can use scope resolution operator
    // the symbol for it is ::

    int c = 12;
    cout << "the global value for global c is " << ::c;

    float d = 34.4f;
    long double e = 34.4l;
    cout << "the size of 34.4 is " << sizeof(34.4) << endl;
    cout << "the size of 34.4F is" << sizeof(34.4F) << endl;

    // Reference variables
    //these are giving another variables names to a particular variable

    float x= 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    //typecasting
 
    int a = 45;
    float b = 45.46;
    cout<<"the value of a is "<<(float)a;
    cout<<"the value of b is "<<(int)b;
    //also
    int z = int(b);
    cout<< z <<endl;
}
