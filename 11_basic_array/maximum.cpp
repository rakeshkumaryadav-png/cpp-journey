#include <iostream>
using namespace std;
int main (){
    int arr[5];
    cout << "Enter 5 element";
for (int i = 0; i < 5; i++){
    cin >>  arr[i];
}
    int max = arr[0];
for(int i = 0; i < 5; i++){
    if(arr[i] > max){
        max = arr[i];
    }
}
cout << "Maximum = " << max;
    return 0;
}

// Enter 5 element 23
// 45
// 65
// 86
// 97
// Maximum = 97