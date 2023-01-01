#include<iostream>
using namespace std;
void ifpass(int marks);
void if_fail(int marks);
void ifimprove(int marks);
main()
{
   int marks;
   while(true)
{
   cout<<"Enter your marks:";
   cin>>marks;
   ifpass(marks);
   if_fail(marks);
   ifimprove(marks);
   
}
}
void ifpass(int marks)
{
 
   if(marks>50)
   {
      cout<<"Congrats your are pass:";
   }
}
void if_fail(int marks)
{
   if(marks<50)
   {
      cout<<"your are fail:";
   }
}
void ifimprove(int marks)
{
   if(marks==50)
   {
    cout<<"improvement:";
   }
}