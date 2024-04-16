#include <iostream>

using namespace std;

int fact(int n);

int main()
{
  cout<<" "<<fact(4);
}

int fact(int n)
{
    if(n == 0) //base case
    {
        cout<<" "<< n ;
        return 1;
    }
    cout<<" "<<n; 
    return n+fact(n-1);
}