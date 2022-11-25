#include<iostream>
using namespace std;
int main()
{
    int marks[] = {23, 45, 56, 89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    int mathmarks[4];
    mathmarks[0] = 78;
    mathmarks[1] = 89;
    mathmarks[2] = 95;
    mathmarks[3] = 15;

    cout<<"mathmarks of first student is "<<mathmarks[0]<<endl;

    //updation of values in arrays::

    mathmarks[3] = 100;
    cout<<mathmarks[3]<<endl;

    

    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks is "<<marks[i]<<endl;

    }
    //quick quiz : do the same with the while and do while loop
    
    //basic foormula for pointer arithematic 
    //addressnew = address current + i*sizeof(datatype)
    //aaddres current = p
    //address new = p+1;

    /// pointers and arrays;
    // int*p = marks;
    // cout<< "the value of marks[0] is "<<*p<<endl;
    // cout<<"the value of marks[1] is " <<*(p+1)<<endl;
    // cout<<"the value of marks[2] is " <<*(p+2)<<endl;
    // cout<<"the value of marks[3] is " <<*(p+3)<<endl;

    int*p = marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    return 0;
    
}
