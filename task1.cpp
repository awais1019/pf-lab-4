#include<iostream>
using namespace std;

void add(int num1, int num2);
void mult(int num1,int num2);
void sub(int num1,int num2); 
void divide(int num1,int num2);

main(){
   while(true)
   {
   int num1,num2;
   char op;
   cout<<"Enter first number:";
   cin>>num1;
   cout<<"Enter second number:";
   cin>>num2;
   cout<<"enter operator:";
   cin>>op;
   if(op=='+')
   {
   add(num1,num2);
   }
   if(op=='*')
   {
   mult(num1,num2);
   }
   if(op=='-')
   {
   sub(num1,num2);
   }
   if(op=='/')
   divide(num1,num2);
   }
}
void add(int num1, int num2)
{ 
  
  
  int sum;
  sum=num1+num2;
  cout<<"sum is:"<<sum<<endl;
  
}
void mult(int num1,int num2)
{ 
  
  
  int product;
  product=num1*num2;
  cout<<"product is:"<<product<<endl;
  
}
void sub(int num1,int num2)
{
 
 
 int mins;
 mins=num1-num2;
 cout<<"Subtraction is:"<<mins<<endl;
 
}
void divide(int num1,int num2)
{  
   
   int div;
   div=num1/num2;
   cout<<"Division is:"<<div<<endl;
   
}
