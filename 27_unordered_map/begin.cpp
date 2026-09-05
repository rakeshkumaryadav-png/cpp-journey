#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map <int, string> mp;
    mp[101] = "Rakesh";
    mp[102] = "Aman";
    mp[103] = "Vikash";

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << " -> " << it-> second << endl;
    }
}

// 103 -> Vikash
// 102 -> Aman
// 101 -> Rakesho