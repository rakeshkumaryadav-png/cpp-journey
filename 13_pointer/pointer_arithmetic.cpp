#include <iostream> 
using namespace std;
int main(){
    int arr[3] = {10, 20, 30};
    int *p = arr;

    cout << "value =" << *p << endl;

    p++;

    cout << "value after p++ = " << *p <<endl;

    return 0;
}


// value =10
// value after p++ = 20