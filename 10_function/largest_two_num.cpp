#include <iostream>
using namespace std;
int largest(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int x ,y;
    cout << "enter first number";
    cin >> x;
    
    cout << "enter second number";
    cin >> y;

    cout << "largest number =" << largest(x, y);
}


// enter first number 12
// enter second number34
// largest number =34
