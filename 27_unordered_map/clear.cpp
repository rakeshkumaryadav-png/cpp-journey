#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int, string> mp;

    mp[101] = "Rakesh";
    mp[102] = "Aman";
    mp[103] = "Vikash";

    cout << "Before clear" << mp.size() << endl;

    mp.clear();

    cout << "After clear" << mp.size() << endl;

    return 0;
}

// Before clear3
// After clear0