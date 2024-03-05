#include "Car.h"
#include <iostream>


using namespace std;

int main()
{
    Car my_car;
    int yr = 2024;
    string mad, mod, col;
    int year;
    my_car.set_color("Red");
    my_car.set_made("Nissan");
    my_car.set_model("Kicks");
    my_car.set_year(yr);

    cout<<"Your car has the following characteristic: "<<endl;
    cout<<"Color: "<<my_car.get_color()<<"\n"<<
          "Made: "<<my_car.get_made()<<"\n"<<
          "Model: "<<my_car.get_model()<<"\n"<<
          "Year: "<<my_car.get_year()<<endl;

    my_car.get_allValues(col, mod, year, mad);
    cout<<"Your car has the following characteristic: "<<endl;
    cout<<"Color: "<<col<<"\n"<<
          "Made: "<<mad<<"\n"<<
          "Model: "<<mod<<"\n"<<
          "Year: "<<year<<endl;


}


