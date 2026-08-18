#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
   
    vector<pair<int,int>> v;

    v.push_back({101, 85});
    v.push_back({102, 90});

    for(int i =0; i <v.size(); i++){
       cout << v[i].first << " " << v[i].second << endl;
    
    }
    
    return 0;
}

// 101 85
// 102 90