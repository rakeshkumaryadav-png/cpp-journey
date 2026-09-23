#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cout << " enter size of array";
    cin >> n;

    vector <int> arr(n);
    cout<< "enter array element";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int target;
    cout << " enter target";
    cin >> target;

    int count = 0;

    for(int i = 0; i< n; i++){
        if(arr[i] == target){
            count++;
        }
    }
    cout << count;
}


//  enter size of array 7
// enter array element 10 20 30 10 50 10 20
//  enter target 10
// 3