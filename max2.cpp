#include <iostream>
using namespace std;

int max_two(int num1, int num2){

  if (num1 > num2)
  {
    return num1;
  }
  else{
    return num2;
  }
  
}

int main(){
  int num1=0,num2=0;
  char opr;

  cout<<"Enter the 1st number : ";
  cin>>num1;

  cout<<"Enter the 2nd number : ";
  cin>>num2;

  cout<<"Maximum number = " << max_two(num1,num2)<<endl;

  return 0;
}