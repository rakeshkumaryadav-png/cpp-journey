#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<int > ms;
    ms.insert (10);
    ms.insert(20);
    ms.insert(30);

   cout << ms.count(30) << endl;
   cout << ms.count(10) << endl;
   cout << ms.count(40) << endl;
    return 0;
}


// 1
// 1
// 0