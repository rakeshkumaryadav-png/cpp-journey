#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number";
    cin >> n;
    int i = 1;
    while(i <= n){
        if( i % 2 == 0){
            cout << i << " ";
        }
        i++;
    }
}

// enter number 10
// 2 4 6 8 10