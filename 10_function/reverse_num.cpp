#include <iostream>
using namespace std;
int reversenum(int n){
    int reverse = 0;
    while (n != 0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    return reverse;
}
int main(){
    int n;
    cout << "enter a number";
    cin >> n;

    cout << "Reverse number =" << reversenum(n);
    return 0;
}


// enter a number 12345
// Reverse number =54321
