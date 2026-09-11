#include <iostream> 
using  namespace std;
int main(){
    for(int i = 1; i<= 20; i++){
        if(i % 3 == 0){
            continue;
        }
        cout << i << " ";
    }
}

// 1 2 4 5 7 8 10 11 13 14 16 17 19 20 