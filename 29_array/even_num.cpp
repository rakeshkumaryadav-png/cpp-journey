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

    for(int i = 0; i< n; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << " ";
        }
    }
}


// enter size of array 5
// enter array element 3 4 7 8 6
// 4 8 6 