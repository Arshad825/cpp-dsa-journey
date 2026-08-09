#include <iostream>
#include <string>
using namespace std;
int main(){
  string str;
  char ch;
  bool found;

  cout<< "Enter the string : ";
  getline(cin,str);

  cout<< "Enter the char : ";
  cin>> ch;

  for( int i =0; i< str.length();i++){
    if( str[i] == ch){
      cout << "Character found at index: " << i << endl;
            found = true;
            break;
    }

  }
  if(!found){
    cout << "Character does not exist in the string." << endl;
  }

    return 0;
}
