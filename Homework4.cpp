////1
//#include <iostream>
//using namespace std;
//int main(){
//	
//		
//	double N,n;
//	int i= 0;
//	double sum= 0;
//	double average= 0;
//	
//	
//	cout << "Enter the number of numbers to be calculated: "<< endl;
//	cin >> N;
//	
//	for(i=0; i<N; i++){
//		
//		cout<< "Enter the number"<< endl;
//		cin>> n;
//		sum= sum+ n;
//		}
//	
//	average= sum/N;
//	cout<< "Sum of the numbers: "<< sum<< endl;
//	
//	cout<< "Average of the numbers: "<< average<< endl;
//	
//	return 0;
//}


////Using arrays
//
//1
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	float N;
//	float n;
//	float sum= 0;
//	float average= 0;
//	int i;
//	
//	cout<< "Enter a number: ";
//	cin>> N;	
//	
//	float avgArray [i];
//
//	for (int i= 0; i< N; i++){
//	
//	cout<< "Enter a value: ";
//	cin>> avgArray [i];
//	
//	sum= sum+ avgArray[i];
//}
//	average= sum/N;
//		
//	cout<< "Sum is: " << sum<< endl;
//	cout<< "Average is: " << average<< endl;	
//
//return 0;
//}



//2
//#include <iostream>
//using namespace std;
//int main(){
//	
//	
//	double N,n;
//	int i= 0, x=0;
//	double sum= 0;
//	double average= 0;
//	
//	
//	cout << "Enter the number of numbers to be calculated: "<< endl;
//	cin >> N;
//	
//	for(i=0; i<N; i++){
//		
//		cout<< "Enter the number"<< endl;
//		cin>> n;
//		
//		if (n>10){
//				
//		sum= sum+ n;
//		x=x+1;
//		
//		}
//		
//		}
//	
//	average= sum/x;
//	cout<< "Sum of the numbers: "<< sum<< endl;
//	
//	cout<< "Average of the numbers: "<< average<< endl;
//	
//	return 0;
//}



////3
//
//#include <iostream>
//using namespace std;
//
//main(){
//	
//	int N, n, i;
//	int min;
//	int max;
//	
//	min = INT_MAX; 	
//	max = INT_MIN; 
//
//	cout << "Enter the number of numbers to be calculated: ";
//	cin >> N;
//	
//	for (int i=0; i< N; i++){
//		
//		cout<< "Enter a number : ";
//		cin>> n;
//			
//		if (n< min)
//			min= n;
//		 
//		if (n> max)
//			max= n;
//		
//		}
//	
//	cout<< "Smallest: "<< min << endl;
//	cout<< "Maximum: "<< max << endl;
//	return 0;
//}



////4 
//
//
//#include <iostream>
//using namespace std;	
//#include<bits/stdc++.h>
//
//int main() {
//	
//	int N, n, i; 
//	
//	cout << "Enter a number: ";
//	cin>> N;	
//	
//	{
//	int array [N]; // define the array
//
//	for (int i= 0; i< N; i++){
//	
//	cout<< "Enter a value: ";
//	cin >> array [i];
//		
//	}
//	
//	//output the array
//	cout<< "The elements of the array: ";
//	
//	for(i=0; i<N; i++)
//	{
//		cout << array [i]<< "" << endl;
//	}
//	
//	//sorting in ascending order
//	int N = sizeof(array)/ sizeof(array [0]);
//	sort(array,array+N);
//	
//	//output after sort
//	cout << "\nArray after sorting: ";
//	
//    	for (int i = 0; i < N ; ++i)
//   		cout << array [i] << " " << endl;
//
//	
//	cout<< "Third smallest number is: " << array [2] << endl;
//}
//	return 0;
//}



////5
//
//#include <iostream>
//using namespace std;	
//
//void greatestCommonDivisor(){	//define the function
//	
//	int n1, n2, i, gcd; 
//	
//	cout << "Enter a number: ";
//	cin>> n1;
//	
//	cout << "Enter a number: ";
//	cin>> n2;
//	
//	for (int i=1 ; i<=n1 && i<=n2 ; i++){	
//			
//		if (n1% i== 0 && n2% i== 0){
//			gcd =i;
//		}		
//			
//}
//
//cout<< "Highest Common Factor: "<< gcd<< endl;
//
//}
//	
//int main() {
//	
//	greatestCommonDivisor(); //call the function
//	return 0;
//}



////6
//
//#include <iostream>
//using namespace std;	
//
//void smallestCommonDivisor(){	//define the function
//	
//	int n1, n2, i, gcd, scd;
//	
//	cout << "Enter a number: ";
//	cin>> n1;
//	
//	cout << "Enter a number: ";
//	cin>> n2;
//	
//	for (int i=1 ; i<= n1 && i<= n2 ; i++){	
//			
//		if (n1% i== 0 && n2% i== 0){
//			gcd =i;  	// first calculate the gcd
//		
//		}		
//			
//}
//	
//	scd = (n1*n2)/gcd; // calculate scd 
//	
//cout<< "Least Common Factor: "<< scd<< endl;
//
//}
//	
//int main() {
//	
//	smallestCommonDivisor(); //call the function
//	return 0;
//}
