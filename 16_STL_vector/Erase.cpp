#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

   v.erase(v.begin() + 1);  //index 1 erase

   for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
   }
    return 0;
}


// 10 30