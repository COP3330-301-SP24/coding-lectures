#include <iostream>
using namespace std;

int main()
{
   double cost_milk, profit_milk, amount_milk;

   cout<<"Provide the amount of milk: ";
   cin >> amount_milk;

   int num_cartons = static_cast<int>(amount_milk/3.75);
   //int num_cartons = round(amount_milk/3.75);

   cost_milk = 0.38*amount_milk;
   profit_milk = 0.27*num_cartons;


   cout<<"The cost of producing "<<amount_milk<<" is: "<<cost_milk<<endl;
   cout<<"The profit of producing "<<num_cartons<<" is: "<<profit_milk<<endl;

    return 0;
}