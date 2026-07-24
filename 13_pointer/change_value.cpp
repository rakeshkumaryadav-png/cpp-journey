#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int *p = &num;

    *p = 20;

    cout << "Updated Number = " << num << endl;

    return 0;
}

// Enter a number: 15
// Updated Number = 20