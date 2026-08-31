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

    for(auto x : mp)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}

// 101 -> Math
// 101 -> Physics
// 101 -> C++
// 102 -> Java