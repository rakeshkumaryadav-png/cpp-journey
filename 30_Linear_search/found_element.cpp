#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter size of array";
    cin >> n;

    vector <int > arr(n);
    cout << "enter aray element";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "enter target";
    cin >> target;


    bool found = true;

    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            cout << "element found index" << i;
            found = true;
            break;
        }
    }
    if(found == false){
        cout << "not found";
    }

    return 0;
}

// enter size of array 5
// enter aray element 23 45 23 78 56
// enter target 23
// element found index0