#include<iostream>
using namespace std;
void iseven(int num);
main()
  {
  while(true)
  {
  int number;
  cout<<"enter number:";
  cin>>number;
  iseven(number);
  }
  }
void iseven(int num)
{ 
 if (num%2==0)
 {
  cout<<"number is even:";
 }
 if(num%2!=0)
 {
  cout<<"number is odd:";
 }
}

  
  
