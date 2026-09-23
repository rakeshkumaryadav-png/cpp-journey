#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter size of array";
    cin >> n;

    vector<int> arr(n);
    cout << "enter aray element";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

  vector <int > newarr(n);

    for(int i = 0; i< n; i++){
       newarr[i] = arr[i];
}

for(int i = 0; i< n; i++){
    cout<< newarr[i] <<" ";
}
return 0;
}

// enter size of array 6
// enter aray element 10 20 30 50 60 70 
// 10 20 30 50 60 70 