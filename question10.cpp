// 1. Write a program to create and store information in a text file test.txt. 


/*
#include <iostream>
#include <fstream>
using namespace std;

int main () {
	
	
// ofstream file: This data type represents the output file stream and is used to create files and to write.
  ofstream file;
  
// create a text file test.txt
  file.open ("test.txt");
  
// Store the information in the text file
  file << "This is the content of the file test.txt\n";
  file.close();
  return 0;
}
*/



// 2. Write a program to read an existing file.


/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream myFile_Handler;
    string myLine;

    // Function to open the text file 
    myFile_Handler.open("test2.txt");

	//Checking whether there is a file in that name
    if(myFile_Handler.is_open())
    {
        // Continue to read the file
        while(getline(myFile_Handler, myLine))
        {
            // Print the content
            cout << myLine << endl;
        }
    // Closing the file
    myFile_Handler.close();
    }
    else
    {
    	//if there is no file with that name, output the error message 
        cout << "File not found!";
    }
    return 0;
}
*/



// 3. Write a program to write multiple lines in a text file.


/*
#include <iostream>
#include <fstream>
using namespace std;

int numline, i;

int main () {	
	
// ofstream file: This data type represents the output file stream and is used to create files and to write.
  ofstream file;
  
// create a text file test3.txt
  file.open ("test3.txt");
  
  cout<< "Input the number of lines to be written : ";
  cin>> numline;
  
// Store the information in the text file
  file << "The content of the file test.txt is: "<< endl;
  
  // Print the number of lines using for loop
  for (i=0; i<numline; i++){
  	
  	file<< "test line "<< i+1 <<endl;
  }
  
  //closing the file
  file.close();
  return 0;
}
*/




// 4. Write a program to read the file and store the lines into an array and list them on the screen.


/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream myFile_Handler;
    string array[1000];
    string fileName;

    // Function to open the text file 
    cout<< "Input the file name to be opened : ";
    cin>> fileName;
    
    myFile_Handler.open(fileName);

	//Checking whether there is a file in that name
    if(myFile_Handler.is_open())
    {
        // Continue to read the file and store the data in the array
        while(getline(myFile_Handler, array[1000]))
        {
        
            // Print the content in the array
            cout << array[1000] << endl;
        }
    // Closing the file
    myFile_Handler.close();
    }
    
    else
    {
    	//if there is no file with that name, output the error message 
        cout << "File not found!";
    }
    return 0;
}
*/




// 5. Write a program to Find the Number of Lines in a Text File.


/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// count the no of lines in the text file
int count = 0;

//function to calculate the number of lines and output the result
void number()
{
  count+1;
    cout<<"number of lines : " << count << endl;
};

int main()
{
    string line;
    string fileName;
    
    //input the file name
    cout<< "Input the file name to be opened : ";
    cin>> fileName;
 
    //if there's a file in that name
    ifstream file(fileName);
    if(file.is_open())
  {
        while(!file.eof())
    {
    	//read the file line by line and output the no of lines
            getline(file,line);
            //cout<< line << endl;
            count++;
        }
        file.close();
    }
    number();
}
*/



// 6. Write a program to count a number of words and characters in a file.


/*
#include <iostream>
#include <fstream>
 #include <string>
using namespace std;

string fileName;
int n, charNum;

int main()
{
cout<< "Input the file name to be opened : ";
	cin>> fileName;
	
	//opening if there is a text file in that name
ifstream fin(fileName); 

int line=0,word=0,size; 
char ch;
fin.seekg(0,ios::end); //bring file pointer position to end of file
size=fin.tellg(); //count number of bytes till current postion for file pointer
fin.seekg(0,ios::beg); //bring position of file pointer to begining of file

while(fin)
{
 	fin.get(ch);
  if(ch==' '||ch=='n')
   word++;

   if((ch > 63 && ch < 91) || (ch > 96 && ch < 123))
   charNum++;


}
cout<<"nWords="<<word<<endl;
cout<<"nchar="<<charNum<<endl;

fin.close(); //closing file
return 0;
}
*/



// 7. Write a program to delete a specific line from a file.


/*
#include <stdio.h>
using namespace std;

      int main() {
      	
      	// declaring pointer variables
        FILE *filePointer1, *filePointer2;
        
        // store the filename in a 50 character string array
        char filename[50];
        char ch;
        
        int deleteLine, temp = 1;
        
        //Ask the user to input the file name
        printf("Enter file name: ");
        
        // store the 'filename'
        scanf("%s", filename);
        
        //open the file in read mode
        filePointer1 = fopen(filename, "r");
        ch = getc(filePointer1);
        
        //until the last character of file is obtained
        while (ch != EOF)
        {
          printf("%ch", ch);
          
          //output the current character and read next character
          ch = getc(filePointer1);
        }
        
        //rewind process
        rewind(filePointer1);
        
        printf(" \n Enter line number of the line to be deleted:");
        //accept number of line to be deleted from user.
        scanf("%d", &deleteLine);
        
        //open new file in write mode
        filePointer2 = fopen("mod_Test7.txt", "w");
        ch = getc(filePointer1);
        
        while (ch != EOF) {
          ch = getc(filePointer1);
          if (ch == '\n')
          temp++;
          
          //except the line to be deleted
          if (temp != deleteLine)
          {
            //copy all lines in file test6.txt
            putc(ch, filePointer2);
          }
        }
        
        //close both the files.
        fclose(filePointer1);
        fclose(filePointer2);
        
        //remove the original file
       // remove(filename);
        
        //rename the file modfileTest7.txt to original name
        rename("test7.txt", filename);
        
        printf("\n The modified file includes:\n");
        filePointer1 = fopen(filename, "r");
        ch = getc(filePointer1);
        
        while (ch != EOF) {
            printf("%ch", ch);
            ch = getc(filePointer1);
        }
        
        fclose(filePointer1);
        return 0;
      }
  */  
    
    

// 8. Write a program to replace a specific line with another text in a file.


/*
#include <stdio.h>
using namespace std;

      int main() {
      	
      	// declaring pointer variables
        FILE *filePointer1, *filePointer2;
        
        // store the filename in a 50 character string array
        char filename[50];
        char ch, newline;
        
        int replace_line, temp = 1;
        
        //Ask the user to input the file name
        printf("Enter file name: ");
        
        // store the 'filename'
        scanf("%s", filename);
        
        //open the file in read mode
        filePointer1 = fopen(filename, "r");
        ch = getc(filePointer1);
        
        //until the last character of file is obtained
        while (ch != EOF)
        {
          printf("%ch", ch);
          
          //output the current character and read next character
          ch = getc(filePointer1);
        }
        
        //rewind process
        rewind(filePointer1);
        
        printf(" \n Enter line number of the line to be replaced:");
        //accept number of line to be deleted from user.
        scanf("%d", &replace_line);
        
        printf ("Input the content of the new line: ");
	scanf("%s", newline);
	
        //open new file in write mode
        filePointer2 = fopen("mod_Test8.txt", "w");
        ch = getc(filePointer1);
        
        
        while (ch != EOF) {
          ch = getc(filePointer1);
          if (ch == '\n')
          temp++;
          
          //except the line to be deleted
          if (temp != replace_line)
          {
            //copy all lines in file test6.txt
            putc(ch, filePointer2);
          }
        }
        
        //close both the files.
        fclose(filePointer1);
        fclose(filePointer2);
        
        //remove the original file
       // remove(filename);
        
        //rename the file mod_Test8.txt to original name
        rename("test8.txt", filename);
        
        printf("\n The modified file includes:\n");
        filePointer1 = fopen(filename, "r");
        ch = getc(filePointer1);
        
        while (ch != EOF) {
            printf("%ch", ch);
            ch = getc(filePointer1);
        }
        
        fclose(filePointer1);
        return 0;
      }     
*/
      
      

// 9. Write a program to copy a file in another name.


/*
#include<iostream>
using namespace std;
int main()
{
    char ch, original_file[50], final_file[50];
    FILE *fs, *ft;
    
    //get the original file
    cout<<"Enter the name of the file: ";
    cin>>original_file;
    
    //If there is no name in that name, error message
    fs = fopen(original_file, "r");
    if(fs == NULL)
    {
        cout<<"\nError Occurred!";
        return 0;
    }
    
    //name of the copied file
    cout<<"Enter the name of copied file: ";
    cin>>final_file;
    
    ft = fopen(final_file, "w");
    if(ft == NULL)
    { 	
    	//If there is no name in that name, error message
        cout<<"\nError Occurred!";
        return 0;
    }
    //copying the file
    ch = fgetc(fs);
    while(ch != EOF)
    {
        fputc(ch, ft);
        ch = fgetc(fs);
    }
    cout<<"\nFile copied successfully.";
    
    //closing both the files
    fclose(fs);
    fclose(ft);
    cout<<endl;
    return 0;
}
*/


// 10. Write a program to merge two files and write it in a new file.


/*
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
    char file1[30], file2[30], outputFile[30], ch;
    fstream fpsOne, fpsTwo, fpTarget;
    
    //input the names of the two files
    cout<<"Enter the Name of First Source File: ";
    gets(file1);
    cout<<"Enter the Name of Second Source File: ";
    gets(file2);
    
    
    fpsOne.open(file1, fstream::in);
    fpsTwo.open(file2, fstream::in);
    if((!fpsOne) || (!fpsTwo))
    {
        cout<<"\nError Occurred (First Source File)!";
        return 0;
    }
    else
    {
        cout<<"\nEnter the Name of Target File: ";
        gets(outputFile);
        fpTarget.open(outputFile, fstream::out);
        if(!fpTarget)
            cout<<"\nError Occurred (Target File)!";
        else
        {
            while(fpsOne>>noskipws>>ch)
                fpTarget<<ch;
            fpTarget<<"\n";
            while(fpsTwo>>noskipws>>ch)
                fpTarget<<ch;
            cout<<"\nContent of Two File Merged Successfully into Third!";
        }
    }
    fpsOne.close();
    fpsTwo.close();
    fpTarget.close();
    cout<<endl;
    return 0;
}
*/
