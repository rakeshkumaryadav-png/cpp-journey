#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<int > ms;
    ms.insert (10);
    ms.insert(20);
    ms.insert(30);

  cout << ms.size();
    return 0;
}


// 3