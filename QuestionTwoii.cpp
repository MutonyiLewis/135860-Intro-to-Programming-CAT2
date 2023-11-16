#include <iostream>
using namespace std;


int main(){
    //Declare input character
    char input;

    //Promt user to enter character
    cout<<"Enter a character"<<endl;
    cin>>input;

    //Check if input is a vowel or consonant
    if (isalpha(input))
    {
        input = tolower(input);
        if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'){
            cout<<"Character "<<input<<" is a vowel\n";
        }else{
            cout<<"The character "<< input<<"is a consonant";
        }
    }else{
        cerr<<"The input is not a character\n";
    }
    
    return 0;
}