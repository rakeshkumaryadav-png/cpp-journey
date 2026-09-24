#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter size of array";
    cin >> n;

    vector <int> arr(n);
    cout << "enter array element";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "enter target";
    cin >> target;


    for(int i= 0; i< n; i++){
        if(arr[i] == target){
            cout << "first occurrence index" << i;
            return 0;
        }
    }

    return 0;

}


// enter size of array 6
// enter array element 10 20 30 20 40 20 
// enter target 20
// first occurrence index1