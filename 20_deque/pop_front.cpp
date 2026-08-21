#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque <int > d;

    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    

     d.pop_front();  //10 delete
     d.pop_back();  // 30 delete

     cout << d.front();
    return 0;
}


// 20
