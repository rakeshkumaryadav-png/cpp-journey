#include <iostream> 
#include <vector>
using namespace std;
int main(){
    int n;
    cout << "enter size of array";
    cin >> n;

vector <int> arr(n);
cout << "enter array of element";
for(int i= 0; i< n; i++){
    cin >> arr[i];
}

cout << "array traversal";
for(int i= 0; i < n; i++){
    cout << arr[i] << " ";
}
}



// enter size of array 5
// enter array of element 23 67 89 45 22
// array traversal23 67 89 45 22