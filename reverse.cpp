#include <iostream>
using namespace std;

class NumberReverser {
  public:
  int reverse(int num){
    int reversed = 0;
    while (num!=0){
      int digit = num %10;
      reversed = reversed * 10 +digit ;
      num /= 10;
    }
    return reversed;
  }
};

int main(){

  int number;
  cout << "Enter the Number: ";
  cin>>number;

  NumberReverser reverser;
  int result = reverser.reverse(number);

  cout << "Reverse number : "<<result<<endl;

  return 0;
}