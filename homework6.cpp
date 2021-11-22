//R.M.M.L. Samarasinghe
//IM/2019/036


#include <iostream>
using namespace std;

 
int productPrice, i;

int customerenter1, customerenter2, customerenter5, customerenter10; //number of denominations entered by the customer

int machinepay_1, machinepay_2, machinepay_5, machinepay_10; //denominations used to pay the balance to the customer

int totbucketR1, totbucketR2, totbucketR5, totbucketR10; //total number of denominations in the buckets

//int balance10, balance5, balance2, balance1; //balance paid in coins

int total=0, balance, oldbalance, choise;

int insufficient; //insufficient amount
int enteredamount=0;

//denominations in excess bins
int overR1=0, overR2=0, overR5=0, overR10=0;

//preloaded denominations
int preloaded1=100, preloaded2=100, preloaded5=100, preloaded10=100;

int balanceamount10, balanceamount5, balanceamount2, balanceamount1;
int resetValues;

int num10, num5, num2, num1; //rupees and number of coins to pay the balance
int balanceamount; //balance after giving the denominations

bool canTransactionDone = true;
bool notTerminated = true;

int password,creditbalance;
char anotherproneeded, y;

 //resetGlobalValues function is used for resetting the global variables after each transaction.
resetGlobalValues()
{

num10 = 0;
num5 = 0;
num2 = 0;
num1 = 0;
total = 0;
canTransactionDone = true;
int productPrice = 0;
choise = 0;
balance = 0;
notTerminated = true;
}

//using authorizeTheUser function we can authorize the user and end the process or continue for a another transaction.
authorizeTheUser(int pw)
{
if(pw == password)
{
cout<< "equal pass "<<endl;
notTerminated = false;
}
else
{
cout << "Invalid attempt! \n returning back to main screen ...\n";
resetGlobalValues();
}
}
 
     
main ()
{

while(notTerminated){
//Owners option to terminate the machine

reenterpassword:

int password=0; //owner's password is 12345
cout<< "Enter the password to terminate (Authorized person only)"<<endl; //by the owner
cout<< "Enter the 0 as the password to continue"<<endl; //by the customer

cout<< "Enter the password: "<<endl;
cin>>password;

if (password== 12345)
{
cout<< "Program is terminated "<<endl;
authorizeTheUser(password);
break;
}

else if (password!= 0)
{

cout << "Enter a valid password ";

goto reenterpassword;

}
else

resetGlobalValues();

{

//User can use the machine until even one of the denomination reserves become 0 or user enters a wrong password before using
while (preloaded1!=0, preloaded2!=0, preloaded5!=0, preloaded10!=0) {

//display the product list
cout<<"Welcome"<<endl;
cout<<"======="<<endl;


nextturns:

cout<<"Choose your drink"<<endl;
cout<<"================="<<endl;


cout<<"Price list"<<endl;

cout<< "Product A- Rs. 45- Enter 1"<<endl;
cout<< "Product B- Rs. 50- Enter 2"<<endl;
cout<< "Product C- Rs. 65- Enter 3"<<endl;
cout<< "Product D- Rs. 80- Enter 4"<<endl;

//display the price list
invalidnum:
cout<< "Enter the product number"<<endl;
cin>>choise;

if (!(choise>=1 && choise<=4))
{
cout<< "Please enter a valid product number"<<endl;
goto invalidnum;
}

switch(choise){

case 1:
productPrice=45;
cout<< "The price is Rs.45"<<endl;
break;

case 2:
productPrice=50;
cout<< "The price is Rs.50"<<endl;
break;

case 3:
productPrice=65;
cout<< "The price is Rs.65"<<endl;
break;

default:
productPrice=80;
cout<< "The price is Rs.80"<<endl;
}

//enter the amount
nextturnsminus:
if (totbucketR1>150 && totbucketR2>150 && totbucketR5>150 && totbucketR10>150 && totbucketR1==0 && totbucketR2==0 && totbucketR5==0 && totbucketR10==0)
{
cout<< "The bins are empty or the maximum amount has exceeded"<<endl;
exit(0);
}

for(int i=1; balance>=0 && totbucketR1<150 && totbucketR2<150 && totbucketR5<150 && totbucketR10<150 && total<= productPrice; i++){

cout<< "Enter the amount (only Rs. 1,2,5,10 coins and no cents) "<<endl;

cout<< "Number of Rs. 1 coins: ";
cin>> customerenter1;

totbucketR1+=customerenter1;

cout<< "Number of Rs. 2 coins: ";
cin>> customerenter2;
totbucketR2+=customerenter2;

cout<< "Number of Rs. 5 coins: ";
cin>> customerenter5;
totbucketR5+=customerenter5;

cout<< "Number of Rs. 10 coins: ";
cin>> customerenter10;
totbucketR10+=customerenter10;

//payment entered

enteredamount= customerenter1*1+ customerenter2*2+ customerenter5*5+ customerenter10*10;
total+=enteredamount;
cout<< "Total amount you entered: Rs. "<< total<< endl;



if (productPrice == total){
        cout<<"Thank you. Enjoy your drink"<<endl;
        goto reenterpassword;
}
//if insufficient


if (total< productPrice)
{
if (balance == total){
        cout<<"Thank you. Enjoy your drink"<<endl;
        goto reenterpassword;
}  else {
insufficient= productPrice-total;
cout<< "Insufficient amount. Please enter "<< insufficient<< "  Rupees"<< endl;
}
}

///////////////////////changed
}

{


//if sufficient

if (anotherproneeded=='y'){
//////////

if (creditbalance < 0)
{
balance = total+creditbalance;
oldbalance= balance;
} else
{
balance= oldbalance - productPrice;
oldbalance= balance;
}
   

}
else{

balance= total- productPrice;
oldbalance= balance;
}






if (balance < 0){
cout<< "Credit balance: " << balance*-1<< endl;
      creditbalance = balance;
}

else{
cout<< "Debit balance: " << balance<< endl;


cout<< "Do you need another product " << endl;
cout<< "If you need, press y" << endl;
cout<< "If you don't need, press n " << endl;
cin>> anotherproneeded;
}

//ds
if (oldbalance < 0)
{
balance= oldbalance*(-1) ;
insufficient= balance- total;
oldbalance = 0;
total = 0;
goto nextturnsminus;
}
//ds


if (anotherproneeded=='y'){

balance= 0;
balance= oldbalance- productPrice;

goto nextturns;
cout<< "Balance in next purchase: " << balance<< endl;



}

else {

//number of 10 rupee coins

num10= balance/10;
if (totbucketR10>=num10){

totbucketR10-= num10; //deducting Rs.10 denominations

}
if (num10!=0) {

cout<< "Collect your "<< num10<<", 10 rupee coins"<< endl;
}
//balance after paying 10 rupee coins
balanceamount5= balance-(10*num10);

num5= balanceamount5/5;

if (totbucketR5>=num5){

if (num5!=0)
{
cout<<"Collect your "<< num5<<", 5 rupee coins"<<endl;
}
totbucketR5-= num5;
}
//balance after paying 5 rupee coins
balanceamount2= balanceamount5-(5*num5);


num2= balanceamount2/2;

if (totbucketR2>=num2){


cout<<"Collect your "<< num2<<", 2 rupee coins"<<endl;
}
totbucketR2-= num2;
if (num2!=0){

//balance after paying 2 rupee coins
balanceamount1= balanceamount2-(2*num2);

if (totbucketR1>=num1){

num1= balanceamount1;

if (num1!=0)
{
cout<<"Collect your "<< num1<<", 1 rupee coins"<<endl;
}

totbucketR1-= num1;

}
}

cout<<"Collect your balance"<<endl;
cout<<"Thank you. Enjoy your drink"<<endl;

break;
}
return 0;
//}
}
}
}
}
}
