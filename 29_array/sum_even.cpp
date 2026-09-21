#include <iostream> 
#include <vector>
using namespace std;
int main(){
    int n;
    cout << "enter size of array";
    cin >> n;

    vector <int> arr(n);
    cout<< "enter array element";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int sum = 0;

    for(int i = 0; i< n; i++){
        if(n % 2 == 0){
            sum = sum + arr[i];
        }
    }
    cout << sum;

    return 0;
}


// enter size of array 4
// enter array element 5 6 4  8
// 23