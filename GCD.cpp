#include<iostream>
using namespace std;

int main(){
    int num1 = 0 , num2 = 0;
    cout<< "Ener the num1 : ";
    cin >> num1;
    cout<< "Ener the num1 : ";
    cin>> num2;

    while (num2 != 0)
    {
       int temp = num2;
       num2 = num1 % num2;
       num1 = temp;
    }
    cout<< "The GCD is : "<<num1<<endl;
    
    return 0;
}