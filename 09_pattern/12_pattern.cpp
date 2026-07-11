#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        int space = 2 * (n - i);
        for(int k = 0; k < space; k++){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}



// 1         1
// 12       21
// 123     321
// 1234   4321
// 12345 54321