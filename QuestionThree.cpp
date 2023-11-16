#include <iostream>
#include <string>

using namespace std;


int main(){
    //Initialize the variables
    string name,pass;
    string username = "lleewii";
    string password = "@ll3w11";
    int userChoice; 
    string fullName, YOB, country, citizenship,city, university, courseName, UnitName, hobbies;

    //Prompt user for there username and password
    cout<<"Enter your username\n";
    cin>>name;
    cout<<"Enter your password\n";
    cin>>pass;

    //Check if username and password match
    if(name==username && pass==password){
        do{
            cout<<"Login successful.\n Welcome to my Simple App. Select an action to perform: \n";
            cout<<"1. Go to About Us Page \n";
            cout<<"2. Go to Services Page \n";
            cout<<"3. Go to Full Profile Page \n";
            cout<<"4. Logout \n";
            //Promt user to enter a choice
            cout << "Enter your choice (1-4): ";
            cin >> userChoice;

            switch (userChoice){
            case 1:
                cout<<"\n\nProfile Page\n";
                cout<<"My name is Lewis Sitati\n";
                cout<<"I enjoy C++ because of its formating\n\n";
                break;
            case 2:
                cout<<"\n\nServices Page\n";
                cout<<"This page displays what the user can do to earn money\n";
                cout<<"GM but not good morning...Get Money\n\n";
                break;
            case 3://If the user Selects Option 3 It should Display all thier information
                cout<<"\n\nFull Profile Page\n";
                
                //Prompt user to input details
                cout<<"Enter your full name: "<<endl;
                getline(cin, fullName);
                cout<<"Enter your Year of Birth: "<<endl;
                getline(cin,YOB);
                cout<<"Enter your Country: "<<endl;
                getline(cin, country);
                cout<<"Enter your Citizenship: "<<endl;
                getline(cin, citizenship);
                cout<<"Enter your City: "<<endl;
                getline(cin, city);
                cout<<"Enter your University: "<<endl;
                getline(cin, university);
                cout<<"Enter your course name: "<<endl;
                getline(cin, courseName);
                cout<<"Enter your Unit name: "<<endl;
                getline(cin, UnitName);
                cout<<"Enter your hobbies: "<<endl;
                getline(cin, hobbies);
                
                cout<<"----------------------------------------"<<endl;

                //Output user details

            
                cout<<"Full Name: "<<fullName<<endl;
                cout<<"Year of Birth: "<<YOB<<endl;
                cout<<"Country: "<<country<<endl;
                cout<<"Citizenship: "<<citizenship<<endl;
                cout<<"University: "<<university<<endl;
                cout<<"Course Name: "<<courseName<<endl;
                cout<<"Unit Name: "<<UnitName<<endl;
                cout<<"Hobbies: "<<hobbies<<"\n\n"<<endl;
                break;
            case 4:
                cout << "\n\nLogout Successful\n\n" << endl;
                break;
            default:
                cout << "\n\nInvalid choice. Please enter a valid option.\n\n" << endl;
            }
            
        } while (userChoice!=4);
        
        

    }else{
        cout<<"Invalid Credentials Please try again later!!"<<endl;
    }


    return 0;
}