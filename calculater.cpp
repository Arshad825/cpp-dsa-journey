#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    int a = 0;
    int b = 0;

    do {
        cout << "\npress 1 for addition" << endl;
        cout << "press 2 for substract" << endl;
        cout << "press 3 for multipli" << endl;
        cout << "press 4 for divide" << endl;
        cout << "press 5 for exit" << endl;
        cout << "Enter the choice of oprater: ";
        
        cin>> choice;

        if(cin.fail()){  
        cout << "Invalide input! Please enter a number." << endl;
        cin.clear();
        cin.ignore(100,'\n');
        continue;
        }
        if (choice < 1 || choice > 5)
        {
            cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
            continue;
        }
        if(choice == 5){
            cout<< "Exit!"<< endl;
            break;
        }
        cout << "Enter first number: ";
        cin >> a;
        if(cin.fail()){
            cout<< "Invalid input!  Please enter a valid number."<< endl;
            cin.clear();
            cin.ignore(100,'\n');
            continue;
        }
        cout << "Enter second number";
        cin>>b;
        if(cin.fail()){
            cout<<"Invalid input! Please enter a valid number."<< endl;
            cin.clear();
            cin.ignore();
            continue;
        }
        switch (choice)
        {
        case 1:
            cout << "Answer = "<<a+b<<endl;
            break;
        case 2:
            cout << "Answer = "<<a-b<<endl;
            break;
        case 3:
            cout << "Answer = "<<a*b<<endl;
            break;
        case 4:
            if(b==0){
                cout << "Division by zero is not allowed."<<endl;
            }
            else{
                 cout << "Answer = "<<a/b<<endl;
            }
            break;
        
        default:
             cout<<"Wrong Choice"<<endl;
            break;
        }

        
        }while (choice != 5);
        
        return 0;
    }