
// 1.system header files : It comes with the _EDG_COMPILER
// 2.user defined header files: it is written by the programmer
#include <iostream>
// #include "this.h" //this will produce an errror if this.h is not present in the currrent dirctory

using namespace std;
int main()
{
    int a = 4, b = 3;
    cout << "operators in c++\n";
    cout << "followng are the types of operators in c++" << endl;
    // Arithematic operators
    cout << "the value of a + b is " << a + b;
    cout << "the value of a - b is " << a - b;
    cout << "the value of a * b is " << a * b;
    cout << "the value of a / b is " << a / b;
    cout << "the value of a % b is " << a % b;
    cout << "the value of a-- is " << a-- << endl;
    cout << "the value of ++a is " << ++a << endl;


    //Assignment operators

    int w = 3, z =9;
    char d = 'd';

    //comparison operators 

    cout<<"the value of a == b is " << (a==b) <<endl; 
    
    //logical operators 

    cout<<"by using the logical operators "<< ((a==b) || (a!=b)) <<endl;
    
    
    return 0;
}