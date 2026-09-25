#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<" enter size of array ";
    cin >> n;

    vector <int > arr(n);
    cout <<"enter array element";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "enter target";
    cin >> target;

    int count = 0;
    for(int i = 0; i< n; i++){
        if(arr[i] == target){
            count++;
        }
    }
    cout << count;
}


//  enter size of array  5
// enter array element 10 20 30 20 40 
// enter target 20
// 2