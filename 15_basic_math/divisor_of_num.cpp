#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number";
    cin >> n;

    cout <<"divisor";
    for(int i = 1; i<= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}



// enter number 12
// divisor1 2 3 4 6 12\