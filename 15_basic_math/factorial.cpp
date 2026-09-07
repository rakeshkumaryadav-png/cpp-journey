#include <iostream>
using namespace std;
int main(){
    int n; 
    cout << "enter number";
    int fact = 1;
    cin >> n;

    for(int i = 1; i<= n; i++){
        fact = fact * i;
    }
    cout << fact;

    return 0;
}\

// enter number 5
// 120