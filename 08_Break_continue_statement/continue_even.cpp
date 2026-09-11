#include <iostream> 
using namespace std;
int main(){
    for(int i = 1; i <= 20; i++){
        if(i % 2 != 0){
            continue;
        }
        cout << i << " ";
    }
    return 0;
}

// 2 4 6 8 10 12 14 16 18 20