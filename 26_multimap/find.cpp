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

    auto it = mp.find(roll);

    if (it != mp.end())
    {
        cout << "Found: " << it->second;
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}

// Enter roll number: 101
// Found: Math