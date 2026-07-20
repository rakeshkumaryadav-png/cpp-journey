#include <iostream>
using namespace std;
int main (){
    int arr[5];
    cout << "Enter 5 element";
for (int i = 0; i < 5; i++){
    cin >>  arr[i];
}
    int max = arr[0];
for(int i = 4; i > 0; i--){
    if(arr[i] < max){
        max = arr[i];
    }
}
cout << "Minimum = " << max;
    return 0;
}


// 32
// 43
// 54
// 65
// Maximum = 12