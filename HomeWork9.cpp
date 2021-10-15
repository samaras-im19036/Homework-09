/* 1. Declare two (type double) pointer variables named d_var and d_array. Write C++ statements to dynamically create a doubleÅ]precision floatingÅ]point variable and store its address in d_var. Also 
dynamically create an array of 10 doubleÅ]precision floatingÅ]point values and store its address in d_array*/

/*
#include <iostream>
using namespace std;

// Declaring two double type pointer variables.
double *d_var,*d_array;

main(){
	
double *d_var=NULL,*d_array=NULL;
d_var=new double;
d_array=new double[10];		
		
}
*/



/* 2. Write C++ statements to input a value for d_var (i.e., a value that d_var points to) from the console 
and then display it.*/

/*
#include <iostream>
using namespace std;

double *d_var,*d_array;

main(){
	
double *d_var=NULL,*d_array=NULL;
d_var=new double;
d_array=new double[10];		
	
	cout<<"Enter the value into the variable: ";
cin>> *d_var;//takes input

	cout<<"The value entered: ";
cout <<*d_var;// display output		
	
}
*/



/* 3. Write C++ statements to initialize the 10 double values in the dynamically allocated array to 1.0. 
Now write C++ statements to deÅ]allocate the memory (i.e. using the delete operator) pointed by d_var and 
d_array. */

/*
#include <iostream>
using namespace std;

double *d_var,*d_array;
double x=1.0;

main(){
	
d_var= new double;
d_array= new double[10];		
	
for (int i=0; i<10;i++){
	
	d_array [i]= x;
	cout<< *d_array<< "    ";
}		
	
	delete d_var;
	delete[] d_array;
	d_var=NULL;
	d_array=NULL;
}
*/



// 4. Write a program in C to find the largest element using Dynamic Memory Allocation

/*
#include <iostream>
using namespace std;

void findmax (int array[], int size, int *max) {
	
	*max= array[0];
	for(int i=0; i< size; i++)
	{
		if (array[i]> *max)
		*max= array[i];
	}
}

int size;
int array[100];

main(){		
int max;	
	cout<<"Input total number of elements(1 to 100): ";
	cin>>size;
	
for(int i=0; i<size; i++)
	{
		cout<< "Number "<< i<< ": ";
		cin>> array[i];
	}
	
	cout<<"Expected Output : ";
	for(int i=0; i< size; i++){
	cout<< array[i]<<"     ";		
		}
		
	findmax(array,size,&max);
		cout<<"\nMax is "<<max;
	
}
*/



/* 5. A userÅ]defined structure named Timer has two integer parameters to initialize hour and minute members. Write a single C++ statement to create an object of the Timer structure
using dynamic memory allocation and assign it to a pointer variable named timePtr. Assign values of 10 and 
20 for hour and minute respectively.*/

/*
#include <iostream>
#include<stdlib.h>
using namespace std;

struct Timer {
int hour= 10;
int minute= 20;
};

main(){
	
Timer *timePtr= new Timer();		

	(*timePtr).hour=10;
	(*timePtr).minute=20;
	cout<<"Hours: "<<(*timePtr).hour<<endl;
	cout<<"Minutes: "<<(*timePtr).minute<<endl;
}
*/



// 6. Write a function that will take a string and return a count of each letter in the string.

/*
#include<iostream>
#include<cstring>
using namespace std;

// global variable
int *count;

// function to calculate the frequency
void letterFrequency(string str)
{
	// array with 26 integers
	count = new int[26] {0};
	int x;

	// loop to count characters
	for (int i=0; i<str.length(); i++)
	{
		x = toupper(str[i])-65; // toupper() is used to convert character to Uppercase //A is 65 in ASCII
		*(count+x) = *(count+x) + 1 ;
	}
}

int main()
{
	string str;

	// get use input
	cout << "Enter String: ";
	getline(cin, str) ;

	// function call
	letterFrequency(str);

	// loop display occuring characters 
	for (int i=0; i<26; i++)
	{
		if (count[i] > 0)
		{
			cout << char(i+97) << ": " << count[i] << endl;
		}
	}
	delete []count;
}
*/
