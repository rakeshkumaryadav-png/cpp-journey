#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> mp;

    mp["Rakesh"] = 10;
    mp["Aman"] = 20;
    mp["Vikas"] = 30;

    cout << "Before erase:" << endl;
    for(auto x : mp) {
        cout << x.first << " -> " << x.second << endl;
    }

    mp.erase("Aman");

    cout << "After erase:" << endl;
    for(auto x : mp) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}

// Before erase:
// Vikas -> 30
// Aman -> 20
// Rakesh -> 10
// After erase:
// Vikas -> 30
// Rakesh -> 10