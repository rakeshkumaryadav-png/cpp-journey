#include <iostream>
using namespace std;
int main(){
    int n;
    int reverse = 0;

    cout << "Enter a number";
    cin >> n;

    while(n != 0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    cout << "Reverse =" << reverse;
}

// Enter a number 1234567
// Reverse =7654321