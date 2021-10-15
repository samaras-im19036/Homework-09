// 1. Write a program to prinumt the address of a variable whose value is input from user.


/*
#include <iostream>
using namespace std;

main(){

int x;

cout<<"Enter the number: ";
cin>>x;

	cout<< "Address of the variable is: "<< &x<< endl;

return 0;
	
}
*/



// 2. Write a program to print the address of the pointer to a variable whose value is input from user.


/*
#include <iostream>
using namespace std;


main(){

int x;
int *xptr;

cout<<"Enter the number: ";
cin>> x;
	
	xptr= &x;
	cout<< "Address of the pointer is: "<< xptr <<endl;

return 0;
	
}
*/




//3. Write a program to print the value of the address of the pointer to a variable whose value is input from user.


/*
#include <iostream>
using namespace std;


main(){

int x;
int *xptr;

cout<<"Enter the number: ";
cin>> x;

	xptr= &x;
	cout<< "Value of the address of the pointer is: "<< *xptr <<endl;

return 0;
}
*/



//4. Write a program to print a number which is entered from keyboard using pointer.


/*
#include <iostream>
using namespace std;


main(){

int x;

cout<<"Enter the number: ";
cin>> x;

	cout<< "The value entered is: "<< *&x <<endl;

return 0;
}
*/



/* 5. Write a function which will take pointer and display the number on screen. Take number
from user and print it on screen using that function.*/

/*
#include <iostream>
using namespace std;

void pointernum(int *a){
	cout<< *a;
}

int main(){

int x;

cout<<"Enter the number: ";
cin>> x;

pointernum(&x);
return 0;
}
*/



// 6. Write a program to find out the greatest and the smallest among three numbers using pointers.


/*
#include<iostream>
using namespace std;

void sortnumber (int array[],int *min,int *max){
	*min= *max= array[0];
	int i;
	for(i=0; i<3; i++){
		
		if(array[i]> *max){
			*max= array[i];
		}
		else
			*min=array[i];
		}
	}


int main()
{
	int number[2];
	int min,max,n;
	cout<<"Enter three numbers: "<<endl;
	for(int i=0;i<3;i++){
		cin>>n;
		number[i]=n;
	}
	sortnumber(number,&min,&max);
	cout<<"Max= "<<max<<endl;
	cout<<"Min= "<<min<<endl;
}
*/



// 7. Write a program to find the factorial of a number using pointers.


/*
#include<iostream>
using namespace std;

void findTheFactorial(int number,long double*factorial)
{
	*factorial=1;
	
	for(int k=1; k<= number; k++){
	*factorial=*factorial*k;
	}
		
	
}

int main()
{
	int number;
	long double factorial;
	cout<<"Enter the number to find the factorial: ";
	cin>>number;
	findTheFactorial(number,&factorial);
	cout<<"Factorial value: "<<factorial<<endl;
}
*/


//8. Write a program to reverse the digits a number using pointers.


/*
#include<iostream>
using namespace std;

int main() {

    int number, r, rev = 0;
    int *pointnum;

    cout << "Enter a number: ";
    cin >> number;

    pointnum = &number;

    while (*pointnum > 0) {
        r = *pointnum % 10;
        rev = rev * 10 + r;
        *pointnum = *pointnum / 10;
    }

    cout << "Reverse number is: " << rev;

    return 0;
}
*/



//9. Write a program to store n elements in an array and print the elements using pointer.


/*
#include<iostream>
using namespace std;

int n;
int main(){

    cout<<"Enter the count of numbers you wish to input: ";
    cin>>n;
    
    int data[n];
    
    cout<<"Enter the numbers: "<< endl;
    for(int i=0; i<n; i++){
    	
    	cin>> data[i];
   	
	}
    
    cout<< "You entered: ";
for(int i= 0; i< n; i++){
	
      cout << *(data + i); 
}
      
    return 0;
}
*/



//10. Write a program to Calculate the length of the string using a pointer


/*
#include <iostream>
#include<conio.h>

using namespace std;

int main() {

   char string[100], *pointer;
   int i = 0;

   cout << "Enter the string [below 100 characters] : ";
   cin>>string;

   // Assign to Pointer Variable
   pointer = string;
   while (*pointer != '\0') {
      i++;
      pointer++;
   }
   cout << "\nLength of String : " << i;

   getch();
   return 0;
}
*/



//11. Write a program to count the number of vowels and consonants in a string using a pointer.


/*
#include<iostream>
using namespace std;

int main() {

	char string[200], * pointer, vowels, consonents;
	vowels = consonents = 0;

	cout<<"Enter the string: ";
	cin>> string;

	// storing the address of first character in string[] in pointer
	pointer = string;

	while (*pointer != '\0') {
		if (*pointer == 'a' || *pointer == 'e' || *pointer == 'i' || *pointer == 'o' || *pointer == 'u' || *pointer == 'A' || *pointer == 'E' || *pointer == 'I' || *pointer == 'O' || *pointer == 'U')
			vowels++;
		else if ((*pointer >= 'a' && *pointer <= 'z') || (*pointer >= 'A' && *pointer <= 'Z'))
			consonents++;
		// move to next address ( ~ next character )
		++pointer;
	}

	printf("Number of Consonants: %d\n", consonents);
	printf("Number of Vowels: %d", vowels);
return 0;
}
*/



// 12. Write a program in C to sort an array using Pointer.

/*
#include<iostream>
using namespace std;

void sort(int num, int*ptr)
{
	int i, j, k;
	for(int i= 0; i< num; i++){
		for( j=i+1; j< num; j++){
			if(*( ptr+ j) <* (ptr+i)){
				k= *(ptr+ i);
				*(ptr+ i)= *(ptr+ j);
				*(ptr+ j)= k;
			}
		}
	}
	cout<<"After sorting: ";
	for(int i=0; i<num; i++)
		cout<< *(ptr+i)<<" ";
	
}

int main()
{
	int num, i, e;
	int array[num];
	cout<< "Enter the elements of the array: ";
	cin>> num;
	
	int *ptr= array;
	cout<<"Enter the elements:"<<endl;
	for(i=0; i<num; i++){
		
		cin>> e;
		array[i]= e;
	}
	cout<< "Before sorting: ";
	for(i=0; i<num; i++){
		cout<< array[i]<< " ";
	}
	
	cout<< "\n"<< endl;
	sort (num, array);
	
	void sort(int num,int*ptr);
	return 0;
	
}
*/
