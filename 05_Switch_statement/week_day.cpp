#include <iostream>
using namespace std;
int main(){
    int day;
    cout << "Enter a day";
    cin >> day;
    switch(day){
        case 1: cout << "Monday" << endl;
        break;
    case 2: cout << "Tuesday" << endl;
        break;
    case 3: cout << "Wednesday" <<  endl;
        break;
    case 4: cout << "Thusday" << endl;
        break;
    case 5:  cout << "Friday" << endl;
        break;
    case 6: cout << "saturday" << endl;
       break;
    case 7: cout << "sunday" <<  endl;
        break;
    default: cout << "Invalide day"<< endl;
    }
return 0;
}