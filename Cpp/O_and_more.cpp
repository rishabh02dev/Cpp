#include<iostream>
using namespace std;
int main(){
//mainly there are 2 types of streams 
/*and these are input stream
and output streams*/
   int num1 , num2;
   cout<< "Enter the value of num1:\n ";/*this is called insertion operator*/
   cin>>num1;
   cout<<"enter the value of num2:\n";
   cin>>num2;

   cout<<"the sum of both the numbers is" << num1+num2<<endl;
   

    return (0);
}