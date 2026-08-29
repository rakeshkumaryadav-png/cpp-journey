#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[101] = "Rakesh";
    mp[102] = "Aman";
    mp[103] = "Rahul";

    int roll;
    cout << "Enter roll number: ";
    cin >> roll;

    auto it = mp.find(roll);

    if (it != mp.end()) {
        cout << "Student = " << it->second;
    }
    else {
        cout << "Student not found";
    }

    return 0;
}


// Enter roll number: 101
// Student = Rakesh