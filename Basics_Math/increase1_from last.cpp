/*

arr = [1,2,3]       o/p == [1,2,4]
[4,3,2,1]           o/p == [4,3,2,2]

*/

#include<iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter the number of size: " <<endl;
    cin >> n;

    int digits[n];

    for (int a = 0; a <=n-1; a++)
    {
        cin >> digits[a];
    }
    
        digits[n-1] += 1;



    for (int j = 0; j <=n-1; j++)
    {
        cout << digits[j];
    }
    
    
    return 0;
}


 