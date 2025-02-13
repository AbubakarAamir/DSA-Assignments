//NAME:Abubakar Aamir 
//GR# :2089
//Teacher: Sir Taha
//Course: DSA

//Question no : 5

//Sorting in decending order (odd numbers )

// header input output library file
#include <iostream>
// sorting function ke liye library
#include <algorithm>
using namespace std;
// entry of the entire program
int main()
{
    // 10 numbers ko store krne ke liye array
    int arr[10];

    // 10 odd numners ko store krne ke liye aik alag se array
    int oddArr[10];

    // odd numbers ko count krne ke liye aik varaible jiski value zero ha
    int oddcount = 0;

    // user se 10 numbers input  lene
    cout<< "Enter the 10 numbers  "<<endl;
    for (int i = 0; i < 10; i++)
    {
        // user se aik input lene aur array mein store krna
        cin>> arr[i];
    }
    // odd numbers ko alag se store krna

    for (int i = 0; i < 10; i++)
    {
        // agar number odd ha tu  (2 se divide nhi hoga )
        if (arr[i] % 2 != 0)
        {
            // odd number ko evenarr mein store krna
            oddArr[oddcount] = arr[i];
            // even number ka count increase krdena
            oddcount++;
        }
    }

    // even number ko ascending order me sort krna
    sort(oddArr, oddArr + oddcount,greater<int>());

    // sorted odd numbers
    cout<<"Sorted odd numbers in descending order ";
    for (int i = 0; i < oddcount; i++)
    {
        cout << oddArr[i] << " "<<endl; // sorted even numbers ko space ke saat print kare ga
    }

    cout<<"Did you like the program ?";
    return 0;
}