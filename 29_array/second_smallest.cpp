#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter size of array";
    cin >> n;

    vector<int> arr(n);
    cout<< "enter array element";
    for(int i= 0; i < n; i++){
        cin >> arr[i];
    }

    int min1 = arr[0];
    int min2 = 99999;

    for(int i = 0; i< n; i++){
        if(arr[i] < min1){

            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2){
            min2 = arr[i];
        }
    }

    cout << min2;
}


// enter array element 8 9 5 3
// 5