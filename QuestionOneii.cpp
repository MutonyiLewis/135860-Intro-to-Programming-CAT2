#include <iostream>
using namespace std;


int main(){
    //initialize year
    int year;
    //get year from user
    cout<<"Enter the year"<<endl;
    cin>>year;

    //if year is divided by four with no remainder
    if(year%4 == 0){
        cout<<"The year "<<year<<" is a leap year \n";
    }else{
        cout<<"The year "<<year<<" is not a leap year \n";
    }
    return 0;
}