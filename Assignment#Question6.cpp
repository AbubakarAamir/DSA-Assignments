//NAME:Abubakar Aamir 
//GR# :2089
//Teacher: Sir Taha
//Course: DSA


// Question no :6

#include<iostream>
using namespace std;

  int main(){

int num;
int sum = 0;
cout<<"Enter any 6 number for sum of digits"<<endl;
for (int i = 0; i < 6; i++)
{
    cin>>num;
    sum +=num;
}
cout<<"The sum of these number is "<<sum<<endl;

return 0;

  }
