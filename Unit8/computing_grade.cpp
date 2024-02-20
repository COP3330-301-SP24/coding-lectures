#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <iomanip>



using namespace std;

struct student
{
    string student_name;
    double test_1;
    double test_2;
    double test_3;
};



void print_menu();
void test_score(string given_name, student list[],int lenght);
int find_student(string given_name, student list[], int lenght);
void average_score(string given_name, student list[],int lenght);
void compute_all_grades(student list[], int length);


int main()
{
    student student_list[4];
    string given_name;

    int length = 4;
    int option = 0;
    bool sentinel = true;
    ifstream input_file;
    char answer = 'Y';
    string name_file = "../Unit5/student_list.txt";  
    input_file.open(name_file);

    if(!input_file)
    {
        cout<<"Incorrect path or file name"<<endl;
        exit(1);
    }

    int index = 0;
    while (!input_file.eof())
    {
        input_file >> student_list[index].student_name >> student_list[index].test_1 >> student_list[index].test_2 >> student_list[index].test_3;
        index++;
    }
   
    
     while (answer == 'Y' )
     {
        print_menu();
        cout<<"Provide the selected option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            /* Find the student by the name */
            cout<<"Provide the student's name: ";
            cin >> given_name;
            test_score(given_name, student_list,length);
            break;
        case 2:
            /*Compute student's final grade*/
            cout<<"Provide the student's name: ";
            cin >> given_name;
            average_score(given_name, student_list,length);
            break;
        case 3:
            /*Compute all students final grades.*/
            compute_all_grades(student_list, length);
            break;
        case 4:
            /*quit.*/
            cout<<"exit program"<<endl;
            exit(1);
            break;
        default:

            break;
        }
        cout<< "Do you want to keep using the APP, do Y or N: ";
        cin >> answer;
     } 
     
    return 0;
}

/******************************************* my functions *******************************************
*****************************************************************************************************/

void print_menu()
{
        cout<<right<<setfill('#')<<setw(20)<<" Menu "<<setfill('#')<<setw(20)<<"#"<<endl;
        cout<<"1. Find the student by the name."<<endl;
        cout<<"2. Compute student's final grade."<<endl;
        cout<<"3. Compute all students final grades."<<endl;
        cout<<"4. Quit."<<endl;
        cout<<right<<setfill('#')<<setw(40)<<"#"<<endl;
}

int find_student(string given_name, student list[], int lenght)
{
    //int index=-1;
    int i;
    bool sentinel = true;
    for(i=0;i< lenght; i++)
    {
        if(given_name == list[i].student_name)
        {
            cout<<given_name<<endl;
            //index = i;
            sentinel = false;
            break;
        }
    }
    if(sentinel)
    {
      i = -1;
      cout<<"The stundet was not in the list."<<endl;
    }

    return i;
}

void test_score(string given_name, student list[],int lenght)
{
   int index = find_student( given_name, list, lenght);
   if(index != -1){
   cout<<list[index].student_name<<setw(5)<<"first test: "<< list[index].test_1 <<" second test: "<< list[index].test_2 <<" third test: "<< list[index].test_3<<endl;}
}

void average_score(string given_name, student list[],int lenght)
{
    int index = find_student( given_name, list, lenght);
    if(index != -1){
    cout<<list[index].student_name<<setw(5)<<" Average score: "<< (list[index].test_1+list[index].test_2+list[index].test_3)/3<<endl;}
}

void compute_all_grades(student list[], int length)
{
    for(int i=0; i<length; i++)
    {
        cout<< list[i].student_name << "-- Final Grade: "<< (list[i].test_1 + list[i].test_2 + list[i].test_3)/3<<endl;
    }
}