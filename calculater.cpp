#include <iostream>
#include <cmath>
using namespace std;

int Add(int num1,int num2){
  return num1 + num2;
}
int subtract(int num1,int num2){
  return num1 - num2;
}
int multiply(int num1,int num2){
  return num1 * num2;
}
int divide(int num1,int num2){
  if (num2== 0)
    {
        cout << "Error! Division by zero is not possible." << endl;
        return 0;
    }
    return num1 / num2;
}
int power(int num1,int num2){
  return pow(num1,num2);
}


int main(){
  int num1=0,num2=0;
  char opr;

  cout<<"Enter the 1st number : ";
  cin>>num1;

  cout<<"Enter the oprator  (+, -, *, /, ^) : ";
  cin>>opr;

  cout<<"Enter the 2nd number : ";
  cin>>num2;

  switch (opr)
  {
  case '+':
  cout<<"Result = "<<Add(num1,num2);
    break;
  case '-':
  cout<<"Result = "<<subtract(num1,num2);
    break;
  case '*':
  cout<<"Result = "<<multiply(num1,num2);
    break;
  case '/':
  cout<<"Result = "<<divide(num1,num2);
    break;
  case '^':
  cout<<"Result = "<<power(num1,num2);
    break;
  
  default:
    cout << "Invalid operator!";
    break;
  }
  return 0;
}