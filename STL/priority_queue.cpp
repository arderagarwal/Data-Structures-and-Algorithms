#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq; //initialsing a max priority queue
    pq.push(1);             //inserting elements in priority_queue
    pq.push(2);
    pq.push(3);
    pq.push(4);
    cout<<pq.top();         //finding element with highest priority
}
