#include <iostream>
using namespace std;
int main (){
    int arr[5];
    int key;
    cout << "Enter 5 element";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    cout << "Enter number to search";
    cin >> key;

    bool found = false;
    for(int i = 0; i < 5; i++){
        if(arr[i] == key){
            found = true;
            break;
        }
    }
     if(found){
        cout << "found";
    }
    else{
        cout <<"not found";
    }
    return 0;
}


// Enter 5 element 23
// 43
// 23
// 23
// 12
// Enter number to search 23
//    found