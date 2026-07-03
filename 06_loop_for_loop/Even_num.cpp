

//print only even nummber

#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "Emter a number";
  cin >> num;
  for(int i = 2; i <= num; i+=2)
  cout << i << " ";
return 0;
}