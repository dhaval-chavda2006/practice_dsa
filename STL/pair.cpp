#include<bits/stdc++.h>
using namespace std;

void Pairs()
{
    pair<int, int>p ={1,3};
    cout << p.first << " " << p.second;

    pair<int, pair<int,int>>p1 = {1,{2,3}};
    cout << p1.first << " " << p1.second.first;

    pair<int,int>arr[] = {{1,2},{5,6},{10,11}};
    cout << arr[1].second;

}

int main(){
    Pairs();
}