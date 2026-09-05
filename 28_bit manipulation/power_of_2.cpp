#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number";
    cin >> n;
    if(n > 0 && (n & (n - 1)) == 0){
        cout << "Power of 2";
    }
    else{
        cout << "Not power of two";
    }
    return 0;
}


// enter a number 2
// Power of 2