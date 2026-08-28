#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> mp;

    int n;
    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++) {
        cin >> n;
        mp[n]++;
    }

    for(auto x : mp) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}

// Enter 5 elements: 2 3 4 3 5
// 5 -> 1
// 4 -> 1
// 3 -> 2
// 2 -> 1