#include <iostream>
using namespace std;

bool eligibal(int age){

  if (age>=18)
  {
   return true;
  }
  else{
    return false;
  }

}

int main(){
  int age;
  cout<<"Enter your age : ";
  cin>>age;

  bool vote = eligibal(age);

 if (vote)
 {
  cout<<"Your are eligibal for vote."<<endl;
 }
 else{
  cout<<"Your are not eligibal for vote."<<endl;
 }

  return 0;
}

