#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque <int > d;

    d.push_back(20);
    d.push_back(30);
    d.push_front(10);

    cout << d.front() << endl;
    cout << d.back() << endl;
    return 0;
}


// 10
// 30