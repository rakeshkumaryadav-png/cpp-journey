#include <iostream>
using namespace std;
void evenodd(int num){
    if(num % 2==0){
        cout << "even";
    }
    else{
        cout << "odd";
    }
}
int main(){
    int n;
    cout << "enter a number";
    cin >> n;

    evenodd(n);
}


// enter a number 22
// even

// enter a number 27
// odd