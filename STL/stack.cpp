#include<bits/stdc++.h>
using namespace std;

void stack1()
{
    stack<int>st;

    st.push(2);
    st.push(33);
    st.push(53);
    st.push(363);
    st.push(330);

    cout << st.top();
    st.pop();
    cout <<"after pop"<<st.top()<<endl;

}

int main()
{
    stack1();

}