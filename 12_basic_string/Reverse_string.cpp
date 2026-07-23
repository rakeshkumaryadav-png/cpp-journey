#include <iostream>
using namespace std;
int main(){
    string name;
    cout << "Enter name";
    getline(cin , name);
    for(int i = name.length() - 1; i >= 0; i--){
        cout << name[i];
    }
    return 0;
}

// Enter name rakesh
// hsekar 