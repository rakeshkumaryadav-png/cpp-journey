#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set <int> s;
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10);

    for(int  x : s){
        cout << x << " ";
    }
    return 0;
}


// 20 10 30   duplicate is not allow