#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    if (mp.empty()) {
        cout << "Map is empty";
    }
    else {
        cout << "Map is not empty";
    }

    mp[101] = "Rakesh";

    cout << endl;

    if (mp.empty()) {
        cout << "Map is empty";
    }
    else {
        cout << "Map is not empty";
    }

    return 0;
}

// Map is empty
// Map is not empty