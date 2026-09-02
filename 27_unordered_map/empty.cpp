#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map <int, string> mp;
    mp[101] = "Rakesh";
    mp[102] = "Vikash";

    if(mp.empty()){
        cout << "map is empty";
    }
    else{
        cout <<"map is not empty";
    }
    return 0;
}\

// map is not empty