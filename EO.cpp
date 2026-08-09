#include <iostream>
using namespace std;

int main() {
    
    int num = 0;
    while (true)
    {
    cout << "Enter the number: ";
    cin>> num;

    if (cin.fail()) {
        cout << "Invalid input! Please enter an integer." << endl;
        cin.clear();                                         
        cin.ignore(100, '\n'); 
        continue;                                            
    }
    break;
    }
    
    if (num == 0) {
        cout << "Neither" << endl; 
    } else if (num % 2 == 0) {
        cout << "Even" << endl;   
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}