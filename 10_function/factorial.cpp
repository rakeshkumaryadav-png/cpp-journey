#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i<= n; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n;
    cout << "enter a number";
    cin >> n;

    cout << "factorial = " << factorial(n);
    return 0;
}



// enter a number 5
// factorial = 120