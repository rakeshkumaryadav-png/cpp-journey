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

int min = arr[0];
for(int i = 0; i < n; i++){
    if(arr[i] < min){
        min = arr[i];
    }
}

cout << min;
}


// enter size of array 5
// enter array element 5 6 8 4 3
// 3