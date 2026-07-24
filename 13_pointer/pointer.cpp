#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 10;

    int *ptr = &a;
    *ptr = 20;
    ptr = &b;

    cout << a << endl;
    cout << b << endl;
    cout << *ptr << endl;
    return 0;
}



// 20
// 10
// 10