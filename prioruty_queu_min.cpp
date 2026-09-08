#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(15);
    pq.push(30);

    cout<<"priority queu :"<<endl;
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}