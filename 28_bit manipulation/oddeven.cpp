//check Even/odd using bit manipulation

#include <iostream>
using namespace std;
int main(){
int n;
cout << "Enter number";
cin >> n;
if(n & 1) {
    cout << "odd";
}
else{
    cout << "Even";
}

return 0;
}

// Enter number 7
// odd