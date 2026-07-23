#include <iostream>
using namespace std;
int main(){
    string name;
    cout << "Enter name";
    getline(cin, name);
    for(int i = 0; i < name.length(); i++){
        cout << name[i] << endl;
    }
    return 0;
}


// Enter name rakesh
// r
// a
// k
// e
// s
// h