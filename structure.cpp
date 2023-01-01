#include<iostream>
using namespace std;

void add(int num1, int num2,char op);
void mult(int num1,int num2,char op);
void sub(int num1,int num2,char op); 
void divide(int num1,int num2,char op);

main(){
   int num1,num2;
   char op;
   cout<<"Enter first number:";
   cin>>num1;
   cout<<"Enter second number:";
   cin>>num2;
   cout<<"enter operator:";
   cin>>op;
   add(num1,num2,op);
   mult(num1,num2,op);
   sub(num1,num2,op);
   divide(num1,num2,op);

}
void add(int num1, int num2,char op)
{ 
  if(op=='+')
  {
  int sum;
  sum=num1+num2;
  cout<<"sum is:"<<sum<<endl;
  }
}
void mult(int num1,int num2,char op)
{ 
  if(op=='*')
  {
  int product;
  product=num1*num2;
  cout<<"product is:"<<product<<endl;
  }
}
void sub(int num1,int num2,char op)
{
 if(op=='-')
 {
 int mins;
 mins=num1-num2;
 cout<<"Subtraction is:"<<mins<<endl;
 }
}
void divide(int num1,int num2,char op)
{  if(op=='/')
   {
   int div;
   div=num1/num2;
   cout<<"Division is:"<<div;
   }
}
