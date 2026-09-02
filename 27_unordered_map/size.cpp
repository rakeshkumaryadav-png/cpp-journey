#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int, string> mp;

    mp[101] = "Rakesh";
    mp[102] = "Aman";
    mp[103] = "Vikash";

    cout << "Total element =" << mp. size();

    return 0;
}

// Total element =3