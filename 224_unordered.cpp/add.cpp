#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <string, int> mp;

    mp["raksh"] = 10;
    mp["Aman"] = 20;

    mp["rakesh"]= 50;

    cout << mp["rakesh"] << endl;
    cout << mp["Aman"] << endl;

    return 0;
}


// 50
// 20