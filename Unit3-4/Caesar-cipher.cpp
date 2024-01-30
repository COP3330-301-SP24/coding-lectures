#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

    int key = 2;
    int cipher_letter;
    string text ;
    string encripted_text = " ";
    
    ifstream input_file;
    input_file.open("msn.txt");

    if(!input_file)
    {
       cout<<"The given path does not extis or the name file is incorrect."<<endl;
       exit(1); 
    }

    getline(input_file,text);


    for(int i=0; i< text.length(); i++)
    {
        if(isupper(text[i]))
        {
            cipher_letter = (int(text[i])+key-65)%25+65;
        }
        else if (islower(text[i]))
        {
           cipher_letter = (int(text[i])+key-97)%25+97;
        }
        else if(int(text[i])==32)
        {
            cipher_letter = text[i];
        }
        
        string letter(1, char(cipher_letter));
        encripted_text.append(letter);

    }

    ofstream out_file;
    out_file.open("encripted_msn.txt");

    out_file << encripted_text;
    
    out_file.close();
    input_file.close();
    cout<<"Original msn "<<text<<endl;
    cout<<"Encripted msn "<<encripted_text<<endl;

  return 0;
}