#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<int > ms;
    ms.insert (10);
    ms.insert(20);
    ms.insert(30);

    ms.erase(20);
    for(int x: ms){
        cout << x << " ";
    }
    return 0;
}

// 10 30 