#include <iostream>
using namespace std;

/*
Student Number: IM/2019/036 ;
Student Name: Muditha Samarasinghe ;
Assignment Number: 1 ;
Due Date : 23rd August 2021 ;
*/

int main() 
{
 int purshase, tendercash, change, number_of_denominations_fit, amount_left;
 
 cout<<"Enter the purchased price: ";
 cin>> purshase;
 
 cout<<"Enter the amount of cash tendered: ";
 cin>> tendercash;
 
 change= tendercash-purshase;
 cout<<"Change: "<<change<< endl; 
 
 cout<<"Number of Rs. 5000 notes: "<<change/5000<< endl; 
 amount_left=change%5000;

 cout<<"Number of Rs. 2000 notes: "<<amount_left/2000<< endl; 
 amount_left=amount_left%2000;
 
 cout<<"Number of Rs. 1000 notes: "<<amount_left/1000<< endl; 
  amount_left=amount_left%1000;
 
 cout<<"Number of Rs. 500 notes: "<<amount_left/500<< endl; 
  amount_left=amount_left%500;
 
 cout<<"Number of Rs. 100 notes: "<<amount_left/100<< endl; 
  amount_left=amount_left%100;

 cout<<"Number of Rs. 50 notes: "<<amount_left/50<< endl;  
  amount_left=amount_left%50;
 
 cout<<"Number of Rs. 20 notes: "<<amount_left/20<< endl; 
 amount_left=amount_left%20;

 cout<<"Number of Rs. 10 notes: "<<amount_left/10<< endl; 
 amount_left=amount_left%10;
 
 cout<<"Number of Rs. 5 coins: "<<amount_left/5<< endl; 
  amount_left=amount_left%5;
 
 cout<<"Number of Rs. 2 coins: "<<amount_left/2<< endl; 
  amount_left=amount_left%2;

 cout<<"Number of Rs. 1 coins: "<<amount_left/1<< endl; 
 
 return 0;
 }
