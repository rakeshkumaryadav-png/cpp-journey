#include <iostream> 
#include <vector> 
#include <climits>
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

    int max1 = arr[0];
    int max2 = 99999;

    for(int i = 0; i< n; i++){
        if(arr[i] < max1){
            max2 = max1;
            max1 = arr[i];
        }
    }
    else if(arr[i] < max2){
        max2 = arr[i];
    }

    cout << max1 << endl;
    cout << max2;
}