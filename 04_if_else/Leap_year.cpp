#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter year";
    cin >> n;

    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)){
        cout << "leap year";
    }
    else {
        cout << "not leap year";
    }
}


// enter year 2023 
// not leap year


// enter year 2024
// leap year