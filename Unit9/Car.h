#ifndef CLASS_CAR
#define CLASS_CAR

#include <string>


using namespace std;

class Car
{
    private:
        string color;
        string model;
        int year;
        string made;
    public:
        Car();
        ~Car();
        string get_color();
        string get_model();
        int get_year();
        string get_made();
        void get_allValues(string &, string &, int &, string &);
        void set_color(string col);
        void set_model(string mod);
        void set_year(int year);
        void set_made(string mad);
};

#endif

