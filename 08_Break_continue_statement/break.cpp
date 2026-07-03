#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 10; i++){
        if(i == 5) break;
        cout << i << endl;
    }
return 0;
}



#include <iostream>
using namespace std;
int main(){
    int num;
    int i = 1;
    cout << "Enter a number";
    cin >> num;
    for(int i = 1; i <= num; i++){
        if(i ==  30) break;
        cout << i << endl;
    }
return 0;
}