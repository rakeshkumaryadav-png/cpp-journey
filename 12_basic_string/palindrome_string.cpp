#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter name: ";
    getline(cin, name);

    bool palindrome = true;
    int left = 0;
    int right = name.length() - 1;

    while (left < right) {
        if (name[left] != name[right]) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (palindrome)
        cout << "palindrome" << endl;
    else
        cout << "Not  palindrome" << endl;

    return 0;
}


// Enter name: nitin
// palindrome



// Enter name: vikash
// Not  palindrome