#include <string>
#include <iostream>
using namespace std;

class Person{
    private:
       string first_name;
       string last_name;
       string bdy;
       int id;
    public:
       Person(){};
       void set_first_name(string n){first_name = n;}
       void set_last_name(string n){last_name = n;}
       void set_bdy(string d){bdy = d;}
       void set_id(int i){id = i;}

       string get_first_name(){return first_name;}
       string get_last_name(){return last_name;}
       string get_bdy(){return bdy;}
       int get_id(){return id;}
};

class Student:public Person{
    private:
        string courses;
        int credit_hours;
        string major;
    public:
       Student(){}; 
       Student(string cour, int cred_h, string maj){courses = cour; credit_hours =cred_h; major =maj;}
       void print(){cout<<courses<<"\n"<<credit_hours<<"\n"<<major<<endl;} 
};

class Staff:private Person{
    private:
        string role;
        int work_hours;
        double salary;
    public:
        Staff(){};
        Staff(string r, int w_h, double s){role = r; work_hours = w_h; salary = s;}
        void set_personInfo(string f_n, string l_n, string bd, int id)
        {
            set_first_name(f_n);
            set_last_name(l_n);
            set_id(id);
            set_bdy(bd);
        }
};

int main()
{
    Student Carlos("COP3330",47,"Computer Science");
    Carlos.set_first_name("Carlos");
    Carlos.set_last_name("Theran");
    Carlos.set_id(12345);
    Carlos.set_bdy("03-12-1999");

    cout<<"Print Information: "<<endl;
    cout<<Carlos.get_first_name()<<endl;
    cout<<Carlos.get_last_name()<<endl;
    cout<<Carlos.get_id()<<endl;
    cout<<Carlos.get_bdy()<<endl;
    Carlos.print();


    Staff member("Faculty",40,42000);
   member.set_personInfo("Andres", "Suarez","04-10-1996", 8765);
 

}