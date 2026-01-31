#include<bits/stdc++.h>
using namespace std;

void Queue1()
{
    queue<int>q;

    q.push(56);
    q.push(6);
    q.push(5);

    q.back()+=5;
    cout << q.back()<<endl;

    cout <<q.front()<<endl;

    q.pop();
    cout <<"after the pop function"<<q.front()<<endl;
}

int main()
{
    Queue1();
}