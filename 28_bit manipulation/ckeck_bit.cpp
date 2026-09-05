#include <iostream> 
using namespace std;
int main(){
    int n, i;
    cout << "Enter two element";
    cin >> n >> i;

    if(n & (1 << i)){
        cout << "Set";
    }
    else{
        cout << "Not";
    }
    return 0;
}

// Enter two element 5 0
// Set