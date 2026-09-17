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

int max = arr[0];
for(int i = 0; i< n; i++){
    if(arr[i] > max){
        max = arr[i];
    }
}

cout << max;
}

// enter size of array 5
// enter array element 8 7 6 4 3
// 8