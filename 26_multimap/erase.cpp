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
    cout << "Enter roll number to erase: ";
    cin >> roll;

    int erased = mp.erase(roll);

    cout << "Deleted entries = " << erased << endl;

    cout << "Remaining entries:" << endl;

    for(auto x : mp)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}


// Enter roll number to erase: 102
// Deleted entries = 1
// Remaining entries:
// 101 -> Math
// 101 -> Physics
// 101 -> C++

