#include <iostream>
#include <string>

using namespace std;

int main()
{
    int key = 2;
    int cipher_letter;
    string text = "Carlos";
    string encripted_text = " ";
    
    


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
    cout<<"Original msn "<<text<<endl;
    cout<<"Encripted msn "<<encripted_text<<endl;

  return 0;
}