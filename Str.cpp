#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
  string str;

  cout<< "Enter the string : ";
  getline(cin , str);

  unordered_map<char, int> freq;

   for (char ch : str) {
        freq[ch]++;
    }

    cout <<"Duplicate characters:";

    bool found = false;

    for(auto &entry : freq){
       if (entry.second > 1) {
            cout << entry.first << " ";
            found = true;
        }
    }

    if(!found){
      cout << "No duplicate characters found.";
    }
     cout << endl;

  return 0;
}
