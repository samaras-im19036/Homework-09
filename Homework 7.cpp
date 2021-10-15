/*


//g
//Write a single statement that sets the element of t in row 1 and column 2 to zero.


#include <iostream>
using namespace std;

int i,j;

main(){
	int t[2] [5];
	for(i=0; i<2; i++){
		
		for(i=0; i<2; i++){
			t[0] [1]=0;
		}
		break;
	}
	cout<< t[2] [5]; 
	return 0;
}

*/







//h
//Write a nested for statement that initializes each element of t to zero.


/*
#include <iostream>
using namespace std;

int i,j;

main() {

int t[2][5];

for (int i=0; i<2; i++) 
{
for (int j=0; j<5; j++) 
{
t[i] [j]= 0; 

cout << t[i][j];
}
cout<<"\n";
}
 
return 0;
}
*/







/*
//i
//Write a statement that inputs the values for the elements of t from the terminal.

#include <iostream>
using namespace std;

int i, j;

int t[2][5];

main() {

for (int i=0; i<2; i++) {	
for (int j=0; j<5; j++) {

 cout << "Enter data for "<< i<< ", "<< j<< ": ";
    cin >> t[i][j];  
    
}
}

for (int i=0; i<2; i++) {	
for (int j=0; j<5; j++) { 
    
    cout<<"\t"<< t[i][j];

}
 cout<<"\n";
}

return 0;
}
*/








/*

//j
//Write a series of statements that determine and print the smallest value in t.


#include <iostream>
using namespace std;

int i, j;
int t[2][5];
int smallest;

main() {

for (int i=0; i<2; i++) {	
for (int j=0; j<5; j++) {

 cout << "Enter data for "<< i<< ", "<< j<< ": ";
    cin >> t[i][j];  
 
 
 //compare the first and second numbers only... 
  	
 	if (i==0 && j==0)
 	{
 		
 	smallest= t[0][0];
	 }
	 
if (smallest> t[i][j]){
	
    smallest= t[i][j];
	
}

	}   
}

			
cout<<"smallest value: "<< smallest<<endl;

return 0;
}

*/








/*

//k
//Write a statement that displays the elements of the first row of t.


#include <iostream>
using namespace std;

int i, j;

int t[2][5];

main() {

for (int i=0; i<2; i++) {	
for (int j=0; j<5; j++) {

 cout << "Enter data for "<< i<< ", "<< j<< ": ";
    cin >> t[i][j];  
    
}
}

for (int j=0; j<5; j++) { 
    
    cout<<"\t"<< t[0][j];

}

return 0;
}

*/








/*

//l
//Write a statement that totals the elements of the fourth column of t.

#include <iostream>
using namespace std;

int i, j, total;

int t[2][5];

main() {

for (int i=0; i<2; i++) {	
for (int j=0; j<5; j++) {

 cout << "Enter data for "<< i<< ", "<< j<< ": ";
    cin >> t[i][j];  
    
}
}

for (int i=0; i<2; i++) { 
    
    cout<<"\t"<< t[i][3]<<endl;
	total= total+ t[i][3];
}

cout<<"     ------ "<< endl;
cout<<"Total    "<< total <<endl;
return 0;
}

*/







//m

/*Write a series of statements that print the array t in tabular format. List the column
subscripts as headings across the top and list the row subscripts at the left of each
row.
*/

/*
#include <iostream>
#include <iomanip>
using namespace std;

int i, j;

int t[2][5];

main() {

for (int i=0; i<2; i++) {	
for (int j=0; j<5; j++) {

 cout << "Enter data for "<< i<< ", "<< j<< ": ";
    cin >> t[i][j];  
    
}
}

for (int j=0; j<5; j++) { 

    cout<< setw(10)<< "C"<< j;

}
cout<<"\n";


for (int i=0; i<2; i++) {
cout<<"R"<< i<<setw(10);	


for (int j=0; j<5; j++) { 

    cout<<setw(10)<< t[i][j];

}
 cout<<"\n";
}

return 0;
}
*/





/*
//2.

#include <iostream>
using namespace std;

int chosentype; //choosing the type of flight
int i; //elements in the array
int seatnum, option, eseatnum;
int section;
bool fclassfull;
int type;



//int seatsarray[10]= {0,0,0,0,0,0,0,0,0,0};
//int seatsarray[10]= {1,1,1,1,1,0,0,0,0,0};
int seatsarray[10]= {0,0,0,0,0,1,1,1,1,1};

int printboardingpass (int type,int seatNo) {
	
	

	cout<< "---------------------------------------- "<<endl;
	
	cout<< "Boarding Pass "<< endl;
	 
	 if (type==1) { 	 	
	 section= 'First Class';
	 	cout<< "Section: First Class"<< endl;
	 }
	 
	 else{	 	
	 section= 'Economy Class';
	 cout<< "Section: Economy Class"<< endl;
	 }
		
	cout<< "Seat Number: "<< seatNo<< endl;
	
	cout<< "---------------------------------------- "<<endl;
}
	
	//------------------------------------------------------------



// economy class 
int econclassreservation () {

selectseat:
cout<< "Select your seat number from 5 to 9: ";
	cin>> eseatnum;

//---------------------------------------------------------------------------------


	if (seatsarray[eseatnum]==1){
		
		cout<< "This seat is already reserved. Please select another seat number"<< endl;
		goto selectseat;
						
}	
	
	seatsarray[eseatnum]= 1;
//---------------------------------------------------------------------------------	
		
//printboardingpass (chosentype,eseatnum);	



}



bool classfull(int mini, int maxi){
	
for (i=mini; i<maxi; i++)
{
	
	if (seatsarray[i] == 1){		
		return true;

	}
	
	else {
		return false;
	}

}
}





main(){

selecttype:
	
cout<<"Please type 1 for first class"<<endl;
cout<<"Please type 2 for economy class"<<endl;
cin>> chosentype;


//if the passenger selected the first class seats
if (chosentype==1){  // start first class seats

		firstreseration:
	classfull(0,5);
	if (classfull(0,5) == false){
	
	
		
for (i=0; i<5; i++){
	selectseat:
	cout<< "Seating chart 1 "<< i<< ":  "<< seatsarray[i]<< endl;
	
	
//---------------------------------------------------------------	

//-------------------------------------------------------------------------------------------	

}

//else {
	

	cout<< "Select your seat number from 0 to 4: ";
	cin>> seatnum;

//---------------------------------------------------------------------------------


	if (seatsarray[seatnum]==1){
		
		cout<< "This seat is already reserved. Please select another seat number"<< endl;
		goto selectseat;
						
}	
	
	seatsarray[seatnum]= 1;
//---------------------------------------------------------------------------------	
		
printboardingpass (1,seatnum);	

//}
	
	
}

//all seats are reserved in first class
else {
		
	
	cout<< "All the first class seats are reserved"<< endl;
	cout<< "If you want a first class seat in the next flight, input 1"<< endl;
	cout<< "If you want a economy class seat, input 2"<< endl;
	
	cin>> option;
	
	if (option== 1){		
	cout<< "Next flight leaves in 3 hours"<<endl;
	goto selecttype;	
	
	
}
else {
	goto econreseration;
}



}

}  // end first class seats


//if selected economy class
else {
	
	type=2;	
	classfull(5,10);
	if (classfull(5,10) == false){
	
	
		
for (i=5; i<10; i++){
	selectseatecon:
	cout<< "Seating chart "<< i<< ":  "<< seatsarray[i]<< endl;
	
	
//---------------------------------------------------------------	

//-------------------------------------------------------------------------------------------	

}

//else {
	
econreseration:
			
//for (i=5; i<10; i++){
//	cout<< "Seating chart "<< i<< ":  "<< seatsarray[i]<< endl;
//	
//	
////---------------------------------------------------------------	
//
////-------------------------------------------------------------------------------------------	
//
//}

	cout<< "Select your seat number from 5 to 9: ";
	cin>> seatnum;

//---------------------------------------------------------------------------------


	if (seatsarray[seatnum]==1){
		
		cout<< "This seat is already reserved. Please select another seat number"<< endl;
		goto selectseatecon;
						
}	
	
	seatsarray[seatnum]= 1;
//---------------------------------------------------------------------------------	
printboardingpass (2, seatnum);
		
//printboardingpass (chosentype,seatnum);	

//}
	
	
}

//economy classes full
else {
	cout<<"Economy class full"<<endl;
	
		
	cout<< "All the economy class seats are reserved"<< endl;
	cout<< "If you want a economy class seat in the next flight, input 1"<< endl;
	cout<< "If you want a first class seat, input 2"<< endl;
	
	cin>> option;
	
	if (option== 1){		
	cout<< "Next flight leaves in 3 hours"<<endl;
	goto selecttype;	
	
	
}
else {
	goto firstreseration;
}


}
}

}

*/






/*
//3


#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main() {
   char s[100];
   
    cout <<"Enter a text less than or equal to 100 characters : ";
	gets(s);
	
    cout<<"In lowercase letters: "<< strlwr(s)<<endl;
	cout << "\n";
	
	cout<<"In uppercase letters : " << strupr(s)<<endl;
	return 0;
}
*/





/*
//4

#include<iostream>
#include<string.h>
using namespace std;
char str1[100];
char str2[100];

int main() {
	
	cout<<"Input text 1"<<endl;
   cin>> str1;
   
 	cout<<"Input text 2"<<endl;
   cin>> str2;
   
   int result = strcmp(str1, str2);
   if (result==0)
   
   cout<<"Strings are equal"<<endl;
   else
   cout<<"Strings are not equal"<<endl;
  
   return 0;
}
*/




/*

//5

#include <iostream>
#include <cstring>
using namespace std;
  
int main() {
   char string[1000], *token;
   int count = 0;
     
   cout << "Enter the text"<<endl;
  
 cin.getline(string, 1000);
     token = strtok(string, " ");
     
   while(NULL != token) 
   {
       count++;
       token = strtok(NULL, " ");
       
   }
     
   cout << "Word Count: "<<count;
   return 0;
}

*/



/*
//6


#include <iostream>
#include <iomanip>
using namespace std;

int i, j;
int currentcity, destinationcity;
int t[4][4];
int mileage;
int total;
char decision;
char n,y;


main() {

int t[4][4]={0,27,170,90,27,0,201,116,170,201,0,136,90,116,136,0};
		

cout<< "Enter 0- Gampaha"<<endl;
cout<< "Enter 1- Colombo"<<endl;
cout<< "Enter 2- Anuradhapura"<<endl;
cout<< "Enter 3- Kandy"<<endl;

cout<< "Enter the current city"<<endl;
cin>> currentcity;

selectcity:
cout<< "Enter the destination city"<<endl;
cin>> destinationcity;

mileage= t[currentcity][destinationcity];
cout<< "Distance= "<<mileage<< endl;

cout<<"Do you want to continue the travel or exit?"<<endl;

cout<< "If you want to continue, enter y"<<endl;
cout<< "If you want to exit, enter n"<<endl;
cin>> decision;


if (decision== 'y'){
	currentcity= destinationcity;
	total= total+mileage;
	goto selectcity;
	
}
else {
	goto displaytotal;
	cout<<"Total estimated driving miles: "<< total<<endl;
}

displaytotal:
total= total+mileage;
cout<<"Total estimated driving miles: "<< total<<endl;


return 0;
  }
*/
