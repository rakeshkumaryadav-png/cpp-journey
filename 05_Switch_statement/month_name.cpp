

#include <iostream>
using namespace std;
int main(){
    int month;

    cout << "Enter month number(1-12)";
    cin >> month;

    switch(month){
        case 1: cout << "january";
            break;
        case 2: cout << "February";
            break;
        case 3: cout << "march";
            break;
        case 4: cout << "April";
            break;
        case 5: cout << "may";
            break;
        case 6: cout << "June";
            break;
        case 7: cout << "JULY";
            break;
        case 8: cout << "August";
            break;
        case 9: cout << "September";
            break;
        case 10: cout << "October";
            break;
         case 11: cout << "November";
            break;
        case 12: cout << "December";
            break;
        default:
        cout << "Invalid Month!";
    }
return 0;
}