#include <iostream> 
using namespace std;
int maiin(){
    int n, i;
    cout << "Enter two number";
    cin >> n >> i;

    n = n ^(1 << i);

    cout << n;

    return 0;

}