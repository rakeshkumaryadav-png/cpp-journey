#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <string, int> mp;

    mp["rakesh"] = 10;
    mp["Aman"] = 20;
    mp["vikash"]= 50;

    string  name;
    cout << "Enter name";
    cin >> name;

    if(mp.find(name) != mp.end()){
        cout << "found: " << mp[name] << endl;
    }
    else{
        cout << "not found" << endl;
    }
    return 0;
}


// Enter name rakesh
// found: 10