#include<iostream>
using namespace std;

int  sum(int a , int b){
   
    int c = a+b;
    cout<<c<<endl;
    return c;
}
//this will not swap a and b 
//call by reference using pointers
// void swapPointer(int* a , int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;

    //call by refernece using c++ refernce variables
    void swapReferenceVar(int &a , int &b){
        int temp = a;
        a = b;
        b = temp;
    }

int main(){
    int x = 4, y =5;
    // cout<<"the sum of 4 and 5 is "<<sum(4 , 5);
    cout<<"the value of a is "<< x << "the value of b is"<<y<<endl;
    //call by refernce using pointers ;
    // swapPointer(&a , &b);
    swapReferenceVar(x , y);
    cout<<"the value of a is "<< x << "the value of b is"<< y <<endl;
    return 0;
}
