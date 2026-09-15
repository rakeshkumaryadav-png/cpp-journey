#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number";
    cin >> n;

    int count = 0;

    for(int num = 2; num <=n; num++){
       bool prime= true;
       for(int i = 2; i< num; i++){
        if(num % i== 0){
            prime = false;
        }
       }
       if(prime){
        count++;
       }
    }

    cout << n << " " << count;
}

// enter a number 20
// 20 8