#include <iostream>
using namespace std;
int main(){
int arr[5];
cout << "enter 5 element";
for(int i = 0; i < 5; i++){
    cin >> arr[i];
}

bool sorted = true;

for(int i = 0; i < 4; i++)
{
    if(arr[i] > arr[i+1])
    {
        sorted = false;
        break;
    }
}

if(sorted)
{
    cout << "Array is sorted";
}
else
{
    cout << "Array is not sorted";
}

return 0;
}



// enter 5 element 12 13 14 15 16
// Array is sorted