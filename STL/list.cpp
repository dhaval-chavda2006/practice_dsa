#include<bits/stdc++.h>
using namespace std;

void list1()
{
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(99);

    for (auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

}
int main()
{
    list1();
    return 0;
}