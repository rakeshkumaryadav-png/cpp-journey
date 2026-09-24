#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of element";
    cin >> n;

    vector <int > arr(n);
    cout<< "enter array element";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "enter target";
    cin >> target;

    for(int i = 0; i< n; i++){
        if(arr[i] == target){
            cout << "fount element" << i;
            return 0;
        }
    }
    cout << "not found";

    return 0;
}


// enter size of element 6
// enter array element10 20 30 40 50  60
// enter target 40
// fount element3