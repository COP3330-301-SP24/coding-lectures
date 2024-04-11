#include "Array.h"

Array::Array()
{
    size = 0;
    this->ptr = nullptr;
}

Array::Array(int size)
{
    this->size = size;
    ptr = new int[size];
}

Array::Array(const Array & obj)
{
    size = obj.size;
    ptr = new int[size];

    for(int i=0; i<size; i++)
    {
        ptr[i] = obj.ptr[i];
    }
}

 Array::~Array()
 {
    delete [] ptr;
 }

 istream& operator>>(istream& is, Array &Obj)
 {
    cout<<"set values: ";

    for(int i=0; i<Obj.size; i++)
    {
        is >> Obj.ptr[i];
    }

    cout<<"end ";

    return is;
 }

ostream& operator<<(ostream& os, Array &Obj)
{
    cout<<"[ ";

    for(int i=0; i<Obj.size; i++)
    {
        os<<Obj.ptr[i]<<" ";
    }
    cout<<"]";

    return os;
}


const Array Array::operator+(const Array & Obj)
{
    Array result(size);

    for(int i=0; i<size; i++)
    {
        result.ptr[i] = this->ptr[i] + Obj.ptr[i];
    }

    return result;
}

const Array Array::operator-(const Array & Obj)
{
    Array result(size);

    for(int i=0; i<size; i++)
    {
        result.ptr[i] = this->ptr[i] - Obj.ptr[i];
    }
    return result;
}

const Array& Array::operator=(const Array& Obj)
{
      if(this != &Obj)
      {
        this->size = Obj.size;
        this->ptr = new int[size];

         for(int i=0; i<size; i++)
            this->ptr[i] = Obj.ptr[i];
      }

      return *this;
}





