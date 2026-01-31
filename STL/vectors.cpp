#include<bits/stdc++.h>
using namespace std;

void vectors()
{
    vector<int>v;
    
    v.emplace_back(2);
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    
    vector<pair<int,int>>v;
    v.emplace_back(1,2);
    for (int x : v) {
        cout << x << " ";
    }

 vector<int>v(5,100);
        for (int x:v)
        {
            cout << x << " ";     
        }
        
}
int main()
{
    vectors();
    return 0;
}