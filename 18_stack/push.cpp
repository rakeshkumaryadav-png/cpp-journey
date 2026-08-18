#include  <iostream>
#include <stack>
using namespace std;

stack <int> s;
int main(){
    s.push(10);
    s.push(20);
    s.push(30);


   while(!s.empty()) {
        cout << s.top() << " "; // Sabse upar wala element dikhayega
        s.pop();               // Us element ko stack se hata dega
    }
    cout << endl;

}


// 30 20 10 