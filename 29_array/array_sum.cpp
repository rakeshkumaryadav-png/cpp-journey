#include <iostream>
#include <vector>
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
    int sum = 0;

    for(int i = 0; i< n; i++){
        sum = sum + arr[i];
    }
    cout << sum;
}


// enter size of array 5
// enter array element 6 7 8 9 3   
// 33