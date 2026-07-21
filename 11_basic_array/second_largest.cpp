#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "enter 5 element";
    for(int i= 0; i < 5; i++){
        cin >> arr[i];
    }
    int max = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    int second = -1;
    for(int i= 0; i < 5; i++){
        if(arr[i] != max && arr[i] > second){
            second = arr[i];
        }
    }
    cout << "second element" << second;
    return 0;
}


// enter 5 element 34 23 53 32 98
// second element 53