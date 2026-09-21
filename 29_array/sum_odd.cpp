#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; 
    cout << "enter size of array";
    cin >> n;

    vector <int> arr(n);
    cout << "enter array element";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i< n; i++){
        if(arr[i] % 2 != 0){
            sum = sum + arr[i];
        }
    }
    cout << sum;

    return 0;
}



// enter size of array 5
// enter array element 9 3 6 8 2
// 12

