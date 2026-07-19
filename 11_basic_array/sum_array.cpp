#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int sum = 0;
    cout << "Emter 5 element";
    for(int i = 0;  i < 5; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < 5; i++){
        sum = sum + arr[i];
    }
    cout << "sum = " << sum;

    return 0;
}

// 44
// 56
// 43
// 55
// sum = 221