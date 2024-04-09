#include <iostream>

using namespace std;

class Array{
    private:
        int *ptr;
        int size;
    public:

     Array();
     Array(int); 
     ~Array();
    Array(const Array& Obj); //copy constructor - DeepCopy

    // const Array& operator+(const Array & Obj); //overload operation +
    // const Array& operator-(const Array & Obj); //overload operation -
    // const Array& operator=(const Array& Obj);
    friend ostream& operator<<(ostream& os, Array &Obj);
    friend istream& operator>>(istream& is, Array &Obj);
};