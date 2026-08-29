#include <iostream>
#include <map>
using namespace std;

int main(){
    map <string , int> m;
    m["Rakesh"] = 10;
    m["aman"] = 20;

    //update
    m["Rakesh"] = 50;

    cout << m["Rakesh"] << endl;
    cout << m["aman"] << endl;
    return 0;
}

// 50
// 20