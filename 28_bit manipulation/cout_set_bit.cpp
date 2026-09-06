#include <iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout << "Enter number";
    cin >> n;

    while(n > 0){
        n = n & (n -1);
        count ++;
    }
    cout << count;
}

// Enter number 13
// 3