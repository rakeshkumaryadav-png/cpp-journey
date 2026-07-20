#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int even = 0;
    int odd = 0;
    cout << "Enter 5 element";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++){
        if(arr[i] % 2 == 0){
            even ++;
        }
        else{
            odd++;
        }
    }
    cout << "Even = "  << even << endl;
     cout << "odd = "  << odd << endl;
    return 0;
}

// Enter 5 element 12
// 34
// 65
// 76
// 45
// Even = 3
// odd = 2