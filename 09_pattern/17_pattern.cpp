#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for(int i = 1; i <= n; i++)
    {
        // Spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Increasing letters
        char ch = 'A';
        for(int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }

        // Decreasing letters
        ch -= 2;

        for(int j = 1; j < i; j++)
        {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}


//    A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA