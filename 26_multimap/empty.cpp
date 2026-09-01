#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mp;

    if(mp.empty())
    {
        cout << "Multimap is empty" << endl;
    }
    else
    {
        cout << "Multimap is not empty" << endl;
    }

    mp.insert({101, "Math"});

    if(mp.empty())
    {
        cout << "Multimap is empty";
    }
    else
    {
        cout << "Multimap is not empty";
    }

    return 0;
}


// Multimap is empty
// Multimap is not empty