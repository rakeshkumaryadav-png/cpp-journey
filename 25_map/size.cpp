#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[101] = "Rakesh";
    mp[102] = "Aman";
    mp[103] = "Rahul";

    cout << "Total students = " << mp.size();

    return 0;
}

// Total students = 3