#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter array element";
    cin >> n;
    int arr[n];
    cout << "Enter element";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    cout << "positive";
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            cout << arr[i] << " " << endl;
        }
    }
    cout << "negetive";
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            cout << arr[i] << " ";
        }
    }
}

// positive 3 4 6
 
// negetive-8 