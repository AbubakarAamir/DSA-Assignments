//NAME:Abubakar Aamir 
//GR# :2089
//Teacher: Sir Taha
//Course: DSA



//Question no: 3

//find the missing number of given array of size n conatining numbers from 1 to N+1 .but one is missing
// find the miossing number
//example:
//input:[1,2,4,5,6]
//output: [1,2,3,4,5,6]

//1: Sum of first natural numbers formula:

//expected sum  = (N+1)X(N+2)/2

//missing number:
//missing = expected sum - actual sum

//input output library files

#include<iostream>
using namespace std;

//function to find the missing number 
int findMissing(int arr[], int N){

//step:1 
//calculate the expected sum of first (N+1)  numbers 
    int expectedSum = (N+1)*(N+2)/2;
    
    //step:2
    //calculate the actual sum of an given array elements
    int actualsum = 0;
    for (int i = 0; i < N; i++)
    {
        actualsum += arr[i];

    }


//step:3
//missingnumber = expectedsum - actualsum
return expectedSum - actualsum;
}
// main function of the program 
int main(){

    // given array 
    int arr[] = {1,2,3,5,6};
  int N = sizeof(arr)/sizeof(arr[0]);
  cout<<"Mising number is :"<<findMissing(arr,N)<<endl;
  

return 0;
}    

