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

   

    if (mp.count(roll)) {
        cout << "student exists";
    }
    else {
        cout << "Student not found";
    }

    return 0;
}


// Enter roll number: 102
// student exists