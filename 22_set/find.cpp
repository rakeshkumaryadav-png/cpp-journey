#include <iostream>
#include <set>
using namespace std;
int main(){
    set <int > s;
    s.insert(10);
    s.insert (20);
    s.insert(30);

    if(s.find(20) != s.end()){
        cout <<"element found";
    }
    else {
        cout << "element not found";
    }
    return 0;
}

// element found