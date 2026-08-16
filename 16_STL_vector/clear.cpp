#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout <<"size before clear" << v.size() << endl;

    v.clear();

    cout <<"size after clear" << v.size() << endl;
    return 0;
}


// size before clear =3
// size after clear =0