//NAME:Abubakar Aamir 
//GR# :2089
//Teacher: Sir Taha
//Course: DSA



//Question no: 2
//To make the pyramid of user given input number

//input output header files
#include<iostream>
using namespace std;

// main function of our program 
int main(){

// empty varaible to store the user given value
    int N;
    cout<<"Please Enter the  number which you want to make the pyramid pattern "<<endl;
    cin>>N;

//outer loops (total rows =  N)
    for (int i = 1; i <= N; i++)
    {
        //print spaces (total spaces = N-i)
        for (int j = 1; j <= N-i; j++)
        {
            cout<<" ";

        }
        //print stars(total stars 2*i-1)
        for (int j = 1; j <=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;

}