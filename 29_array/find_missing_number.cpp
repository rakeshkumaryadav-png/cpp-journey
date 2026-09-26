#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"enter size of array";
    cin >> n;

    vector <int> arr(n);
    cout << "enter array element";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int sum =  n*(n+1) / 2;

     int arrsum = 0;
    for(int i =  0; i < n-1; i++){
        arrsum = arrsum + arr[i];
    }

    int missing = sum - arrsum;

    cout << missing;
}


// enter size of array 5
// enter array element 1 2 3 5
// 4