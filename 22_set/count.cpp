#include <iostream> 
#include <set>
using namespace std;
int main(){
    set<int > s;

    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert (10);

 cout << s.count(20) << endl;
 cout << s.count (30) << endl;
  cout << s.count (50) << endl;
    return 0;
}

// 1
// 1
// 0  count ckech karta hai ki 
// set me elemement present hai ki nhi