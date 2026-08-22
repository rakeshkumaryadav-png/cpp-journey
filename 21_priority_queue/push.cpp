#include <iostream> 
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);

    cout << pq.top();
    return 0;
}


// 30  kis element ka priority sabse jyada hota hai
//  wh sabse pahle aata hai