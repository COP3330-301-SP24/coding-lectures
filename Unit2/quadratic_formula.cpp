#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;

    cout<<"Provide the equation's coefficients: ";
    cin >> a >> b >> c;
    
    double x_1, x_2;

    double desc = pow(b,2)-4*a*c;

    if(desc < 0)
    {
        cout<<"There is none real solution.";
    }
    else
    {
           x_1 = (-b + sqrt(desc))/(2*a);
           x_2 = (-b - sqrt(desc))/(2*a);
           cout<<"The two-real solutions are: "<<x_1<<" and "<<x_2<<endl; 
    }
  return 0;
}