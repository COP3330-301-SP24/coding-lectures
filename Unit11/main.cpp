#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    Array first(4);

    cin>>first;

    cout<<"Print my array: ";
    cout<<first;

    Array second(first); //copy constructor
    cout<<"\nPrint my second array: ";
    cout<<second;

   //modify the values of your second object
    cin>>second;

    cout<<"\nPrint my array: ";
    cout<<first;
    cout<<"\nPrint my second array: ";
    cout<<second;

    Array result = first + second;

    cout<<"\nPrint my result array: ";
    cout<<result;




}