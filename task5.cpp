#include<iostream>
using namespace std;
void greate(int,int);
main()
{
 while(true)
 {
 int num1,num2;
 cout<<"Enter first number:";
 cin>>num1;
 cout<<"Enter second number:";
 cin>>num2;
 greate(num1,num2);
 }
} 
void greate(int num1,int num2)
{
  if(num1>num2)
 {
  cout<<"number1 is greater:"<<endl;
 }
 if(num2>num1)
 {
 cout<<"num2 is greater:"<<endl;
 }
 if(num1==num2)
 {
 cout<<"numbers are equal:"<<endl;

 }
}