


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "===== Scientific Calculator =====" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Square" << endl;
    cout << "6. Square Root" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {

        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << num1 + num2;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << num1 - num2;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << num1 * num2;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Division by zero is not possible!";
            break;

        case 5:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Square = " << num1 * num1;
            break;

        case 6:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Square Root = " << sqrt(num1);
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}