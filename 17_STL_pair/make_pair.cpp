#include <iostream>
#include <utility>
using namespace std;

int main(){
    pair<int, string> p1 = make_pair(10,"Hello");

    cout<<"first" <<p1.first << endl;

    cout<<"second" << p1.second << endl;

    pair<int, string> p2 = make_pair(20, "world");

    p1.swap(p2);

    cout << "After swap" << endl;
    cout << p1.first<< " " << p1.second<< endl;
}

// first10
// secondHello
// After swap
// 20 world