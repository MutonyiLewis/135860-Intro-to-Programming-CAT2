#include <iostream>
using namespace std;


int main(){
    int maxNum;
    //Enter the maximum number 
    cout<<"Enter the maximum number"<<endl;
    cin>>maxNum;

    //First list the initial prime numbers
    cout<<"2, 3, 5, 7, 11, ";
    //Check if the number is divisible by any number betweeen 2 and 9 if so the number is not prime
    for(int i = 2; i<maxNum; i++){
        if (i%2 == 0 || i%3 == 0 || i%5 == 0 || i%6 == 0 || i%7 == 0 || i%8 == 0 || i%9 == 0)
        {
            
        }else{
            cout<<i<<", ";
        }
    }

    return 0;
    
}