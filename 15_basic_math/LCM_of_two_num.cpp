#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "enter two number";
    cin >> a >> b;

    int lcm = 1;

    for(int i = 1; a <= a * b; i++){
        if(i % a == 0 && i % b == 0 ){
            lcm = i;
            break;
        }
    }
    cout << lcm;
}

// enter two number 4 6
// 12