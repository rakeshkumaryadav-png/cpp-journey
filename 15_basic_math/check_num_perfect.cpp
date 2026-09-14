#include <iostream> 
using namespace std;
int main(){

    int n;
    cout<< "enter number";
    cin >> n;

    int sum = 0;

    for(int i = 1; i< n; i++){
        if(n% i == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        cout << "perfact number";
    }
    else {
        cout << "not perfact number";
    }
}


// enter number 6
// perfact number


// enter number 7
// not perfact number