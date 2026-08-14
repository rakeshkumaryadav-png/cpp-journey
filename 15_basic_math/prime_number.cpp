#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number";
    cin >> n;
    bool prime = true;
    if(n <  1){
        prime = false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            prime = false;
            break;
        }
    }
    if(prime){
        cout << "prime";
    }
    else{
        cout << " not prime";
    }
    
}

// enter number 7
// prime

// enter number 12
//  not prime