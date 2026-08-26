#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<int > ms;
    ms.insert (10);
    ms.insert(20);
    ms.insert(30);

    if(ms.find(20) != ms.end()){
        cout <<"element found";
    }
    else {
        cout << "element not found";
    }
    return 0;
}


// element found
