#include<iostream>
using namespace std;
void discount(string,int);
void nodiscount(string,int);
main()
{
 while(true)
 {
 string day;
 int amount;
 cout<<"Enter day:";
 cin>>day;
 cout<<"Enter shopping amount:";
 cin>>amount;
 discount(day,amount);
 nodiscount(day,amount);
 }
}
void discount(string day,int amount)
 {
  int discount;
  if(day=="sunday")
 {
  discount=amount*0.1;
  discount=amount-discount;
  cout<<"total amount after discount is:"<<discount<<endl;
 }
 }
 void nodiscount(string day,int amount) 
 {
  int discount;
 if (day!="sunday")
 {
 cout<<"your payable amount is:"<<amount<<endl;
 }
 }