#include "Car.h"
#include <iostream>


using namespace std;

int main()
{
    int yr = 2024;
    Car my_car;
    Car your_car("Infinity","Turbo","Gray",yr);
    
    string mad, mod, col;
    int year_car = 0;
    my_car.set_color("Red");
    my_car.set_made("Nissan");
    my_car.set_model("Kicks");
    my_car.set_year(yr);

    cout<<"Your car has the following characteristic: "<<endl;
    cout<<"Color: "<<my_car.get_color()<<"\n"<<
          "Made: "<<my_car.get_made()<<"\n"<<
          "Model: "<<my_car.get_model()<<"\n"<<
          "Year: "<<my_car.get_year()<<endl;

    your_car.get_allValues(col, mod, year_car, mad);
    cout<<"Your car has the following characteristic: "<<endl;
    cout<<"Color: "<<col<<"\n"<<
          "Made: "<<mad<<"\n"<<
          "Model: "<<mod<<"\n"<<
          "Year: "<<year_car<<endl;


}


