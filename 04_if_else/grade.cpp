#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter a number";
    cin >> marks;
    if(marks > 90){
        cout << "Grade A" << endl;
    }
    else if(marks > 70 ){
        cout << "Grade B" << endl;
    }
    else if(marks > 50){
        cout << "Grade C" << endl;
    }
    else{
        cout << "fail" << endl;
    }
return 0;
}