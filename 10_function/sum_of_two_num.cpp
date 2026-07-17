#include<iostream>
using namespace std;

    int add(int a, int b){
        return a +b;
    }
int main(){
    int x ,y;
    cout << "enter first num";
    cin >> x;

    cout << " enter second number";
    cin >> y;

    int sum = add(x,y);
    cout << sum;
    return 0;
}


// enter first num 10
// enter second number 30
// 40