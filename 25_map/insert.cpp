#include <iostream>
#include <map>
using namespace std;

int main(){
    map <int , int> m;
    m[101] = 85;
    m[102] = 90;
    m[103] = 78;

    for(auto x : m){
        cout << "Roll no" << x.first << "mark" << x.second << endl;
    }
    return 0;
}

// Roll no101 mark85
// Roll no102 mark90
// Roll no103 mark78