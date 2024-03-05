#include "Car.h"

Car::Car(){}

Car::Car(string mad,string mod,string col,int yr)
{
   made = mad;
   model = mod;
   color = col;
   year = yr;
}

Car::~Car(){}

string Car::get_color()
{
    return color;
}

string Car::get_made()
{
    return made;
}

string Car::get_model()
{
    return model;
}

int Car::get_year()
{
    return year;
}

void Car::get_allValues(string &col, string &mod, int &yr, string &mad)
{
   col = color;
   mod = model;
   yr = year;
   mad = made;
 }

void Car::set_color(string col)
{
    color = col;
}

void Car::set_model(string mod)
{
    model = mod;
}

void Car::set_year(int yr)
{
    year = yr;
}

void Car::set_made(string mad)
{
    made = mad;
}