#include <iostream>
using namespace std;
int main(){
    int n = 5;
    cout << "enter element";
    // cin >> n;
    for(int i= 1; i <= n; i++){
        for (int j = 0; j < n -i + 1; j++){
            char ch = 'A' + j;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}


// ABCD
// ABC
// AB
// A