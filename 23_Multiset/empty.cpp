#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<int > ms;
    ms.insert (10);
    ms.insert(20);
    ms.insert(30);

 if(ms.empty()){
        cout  <<"vector is empty";
    }
    else{
        cout <<"vector is not empty";
    }
    return 0;
}

// vector is not empty