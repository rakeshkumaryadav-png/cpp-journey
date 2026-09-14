#include <iostream>
using namespace std;
int main(){
    int month;
    cout << "enter month";
    cin >> month;

    if(month == 2){
        cout << "28 days";
    }
    else if(month == 4 || month == 6 || month ==  9 || month == 11){
        cout << "30 days";
    }
else if(month >= 1 && month <= 12){
    cout << "31 days";
}
else {
    cout << "Invalide month";
}

return 0;

}

// enter month 3
// 31 days


// enter month 2
// 28 days

// enter month 8
// 31 days