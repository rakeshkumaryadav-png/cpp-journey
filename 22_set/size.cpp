#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    s.insert (10);
    s.insert (20);
    s.insert(30);
    s.insert(40);

    cout << s.size();
    return 0;
}

// 4