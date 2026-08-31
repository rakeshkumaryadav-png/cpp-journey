#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mp;

    mp.insert({101, "Math"});
    mp.insert({101, "Physics"});
    mp.insert({101, "C++"});
    mp.insert({102, "Java"});

    int roll;
    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Total entries = " << mp.count(roll);

    return 0;
}

// Enter roll number: 101
// Total entries = 3