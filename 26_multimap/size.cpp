#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mp;

    mp.insert({101, "Math"});
    mp.insert({101, "Physics"});
    mp.insert({102, "C++"});
    mp.insert({103, "Java"});

    cout << "Total entries = " << mp.size();

    return 0;
}

// Total entries = 4