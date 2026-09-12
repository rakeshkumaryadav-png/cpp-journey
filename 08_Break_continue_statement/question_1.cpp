#include <iostream> 
using namespace std;
int main(){
    for(int i = 1; i<= 20; i++){
        if(i % 5 == 0){
            break;
        }
        if(i % 2== 0){
            continue;
        }
        cout << i << " ";
    }
}

// 1 3 

