// NAME:Abubakar Aamir
// GR# :2089
// Teacher: Sir Taha
// Course: DSA

// Question no:4

// Sorting numbers in Ascending order(Even),Decending order(odd)

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

    // 10 even numners ko store krne ke liye aik alag se array
    int evenArr[10];

    // even numbers ko count krne ke liye aik varaible jiski value zero ha
    int evencount = 0;

    // user se 10 numbers input  lene
    cout<< "Enter the 10 numbers  "<<endl;
    for (int i = 0; i < 10; i++)
    {
        // user se aik input lene aur array mein store krna
        cin>> arr[i];
    }
    // Even numbers ko alag se store krna

    for (int i = 0; i < 10; i++)
    {
        // agar number even ha (2 se divide ho saktha ha )
        if (arr[i] % 2 == 0)
        {
            // even number ko evenarr mein store krna
            evenArr[evencount] = arr[i];
            // even number ka count increase krdena
            evencount++;
        }
    }

    // even number ko ascending order me sort krna
    sort(evenArr, evenArr + evencount);

    // sorted even numbers
    cout<<"Sorted even numbers ";
    for (int i = 0; i < evencount; i++)
    {
        cout << evenArr[i] << " "; // sorted even numbers ko space ke saat print kare ga
    }
    return 0;
}