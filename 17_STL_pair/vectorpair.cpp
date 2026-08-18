#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
   
    vector<pair<int,int>> v;

    v.push_back({101, 85});
    v.push_back({102, 90});

    for(int i =0; i <v.size(); i++){
        cout << "Roll no = " <<  v[i].first;
       cout << "marks = " <<  v[i].second << endl;
    
    }
    
    return 0;
}


// Roll no = 101marks = 85
// Roll no = 102marks = 90
    
