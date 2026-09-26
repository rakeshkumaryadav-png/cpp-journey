#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout << "enter size of array";
cin >> n;

vector <int> arr(n);
cout <<"enter arary elemnet";
for(int i = 0; i< n; i++){
    cin >> arr[i];
}

int first = arr[0];

for(int i = 0; i< n-1; i++){
    arr[i] = arr[i + 1];
}

arr[n-1] = first;

for(int i = 0; i< n; i++){
    cout << arr[i] << " ";
}

return 0;
}


// enter size of array 5
// enter arary elemnet 3 4 5 6 8
// 4 5 6 8 3