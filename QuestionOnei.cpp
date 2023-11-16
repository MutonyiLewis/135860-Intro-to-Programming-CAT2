#include <iostream>
using namespace std;


int main(){
    int choice;
    int num1,num2,num3;

    cout<<"Enter 3 numbers"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;

    if (num1<num2 && num1<num3)
    {
        //If the first number is smallest pick choice 1
        choice = 1;
    }else if (num2<num1 && num2<num3)
    {
        //If the second number is smallest pick choice 1
        choice = 2;
    }else if(num3<num1 && num3<num2)
    {
        choice = 3;
    }else{
        //If the third number is smallest pick choice 1
        cout<<"There is no smallest number";
    }

    //Switch between the selected choices.
    switch (choice)
    {
    case 1:
        cout<<"The smallest number is: "<<num1<<endl;
        break;
    case 2:
        cout<<"The smallest number is: "<<num2<<endl;
        break;
    case 3:
        cout<<"The smallest number is: "<<num3<<endl;
        break;
    
    default:
        break;
    }
    
    
    return 0;
}