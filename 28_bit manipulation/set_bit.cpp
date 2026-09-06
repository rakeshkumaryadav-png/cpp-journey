#include <iostream>
using namespace std;
int main(){
    int n,  i;
    cout << "Enter  two number";
    cin>> n >> i; 

    n = n | (1 << i);

    cout << n;

    return 0;
}

// Enter  two number 4 1
// 6