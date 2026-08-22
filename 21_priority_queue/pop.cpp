#include <iostream> 
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);

    cout <<"before pop" << pq.top() << endl;
    pq.pop();

    cout << "After pop" << pq.top() << endl;

    
    return 0;
}

// before pop 30
// After pop 20
