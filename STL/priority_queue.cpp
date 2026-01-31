#include<bits/stdc++.h>
using namespace std;

void Priority_Queue1()
{
    priority_queue<int>pq;

    pq.push(66);
    pq.push(98);
    pq.push(8);
    pq.push(9);
    cout << pq.top()<<endl;

    pq.pop();
    cout << "AFTER THE POP FUNCTION" << pq.top()<<endl;

}
int main()
{
    Priority_Queue1();
    return 0;
}