#include <bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    cout <<"enter size of array";
    cin >> n;

    vector <int> arr(n);
    cout <<"enter array element";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int target;
    cout <<"enter target";
    cin >> target;

    int index = -1;

    for(int i = 0; i< n; i++){
        if(arr[i] == target){
            index = i;
        }
    }

    cout << index;

    return 0;
}


// enter size of array 5
// enter array element 20 10 20 30 20 
// enter target 20
// 4