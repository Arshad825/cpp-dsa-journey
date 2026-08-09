#include <iostream>
using namespace std;

class NumberFactorial {
  public:
  int factorial(int num){
    if(num == 0 || num==1){
      return 1;
    }
     return num * factorial(num-1);
  }
};

int main(){

  int number;
  cout << "Enter the Number: ";
  cin>>number;

  NumberFactorial factorial;
  int result = factorial.factorial(number);

  cout << "Factorial : "<<result<<endl;

  return 0;
}