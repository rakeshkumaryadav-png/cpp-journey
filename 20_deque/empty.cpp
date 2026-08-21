#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque <int > d;

    d.push_back(20);
    d.push_back(30);
    d.push_front(10);

   cout << "front =" << d.front() << endl;
   cout << "back =" << d.front()  << endl;
   cout << "size =" << d.size() << endl;
   if(d.empty())
   cout << "deque is empty";
   else
   cout << "deque is empty";
    return 0;
}


// front =10
// back =10
// size =3
// deque is empty