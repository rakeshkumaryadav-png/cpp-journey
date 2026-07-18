#include <iostream>
using namespace std;
int cubenum(int n){
    return n * n * n;
}
int main(){
    int num;

    cout << "enter a number";
    cin >> num;

    cout << "cube =" << cubenum(num);
    return 0;
}


// enter a number 3
// cube =27