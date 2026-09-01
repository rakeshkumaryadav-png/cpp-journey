#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mp;

    mp.insert({101, "Math"});
    mp.insert({101, "Physics"});
    mp.insert({102, "C++"});

    cout << "Before clear = " << mp.size() << endl;

    mp.clear();

    cout << "After clear = " << mp.size() << endl;

    return 0;
}


// Before clear = 3
// After clear = 0