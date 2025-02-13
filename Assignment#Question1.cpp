//NAME:Abubakar Aamir 
//GR# :2089
//Teacher: Sir Taha
//Course: DSA



      // Question no: 1

          //CODE FOR POSITIVE INTEGAR GIVEN BY THE USER:
//input output library header file
 #include <iostream>
 using namespace std;

 //here is the return type function which give us positive number 
 int reservedPositive(int num)
 {
     //varaible to store the reversed number 
     int reserve = 0;
   // loops runs until the num becomes zero 
     while (num > 0)
     {
         //extract the lastdigit
         int lastDigit = num % 10;
         //add last digit to the reversed number
         reserve = reserve * 10 + lastDigit;
         //remove last digit
         num = num / 10;
     }
     //here its return the final last reversed number
     return reserve;
 }

 // here is the main excution of our program(entry point)
 int main()
 {
     //empty varaible use to store the value given by the user
     int num;
     // print the message 
     cout<< "Please Enter the positive number "<<endl;
     //taking input from the user
     cin>> num;

     if (num >= 0)
     {
         cout<< "Reserved number is :" << reservedPositive(num) << endl;
     }

     else
     {
         cout<< "Please Enter the positive " << endl;
     }

 // here is the end of our program
     return 0;
 }




     //CODE FOR THE NEGATIVE INTEGAR GIVEN BY THE USER:

//input output library header files
#include<iostream>
using namespace std;
//here is the return type function which give us negative number 
int reversedNegative(int num){

//varaible to store the reversed number
    int reversed = 0;
  //convert negative number to positive number for processing
  num = -num;

//loops runs until the num becomes zero
  while (num>0)
  {
    //extract the lastdigit
    int lastDigit = num % 10;

//add last digit to the reversed number
    reversed = reversed * 10 + lastDigit;
    //remove the last digit
    num = num  /10;


  }
  //convert back to negative before returning 
  return -reversed;
  
}

// main entry of the program
int main(){
  // empty varaible to store the user given value
    int number;
    // here we print the message to show
    cout<<"Please Enter the number:"<<endl;
    // here we taking the input from the user
    cin>> number;

    if (number < 0)
    {
        cout<<"Reversed number is :"<<reversedNegative(number)<<endl;

    }
    else
    {
        cout<<"Please Enter a negative number"; 
    }
    
    return 0;
}

