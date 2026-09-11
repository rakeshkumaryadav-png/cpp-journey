#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 10 == 0) {
            break; // Stops when i reaches 10
        }
        cout << i << " ";
    }
    return 0;
}

// 1 2 3 4 5 6 7 8 9 