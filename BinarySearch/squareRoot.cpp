//find square root of number wothout inbuilt function

#include<iostream>
using namespace std;

int squareRoot(int n)
{
    int s = 0, e = n;
    int mid = s+(e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        int sq = mid*mid;

        if (sq ==n)
        {
            return mid;
        }
        if (sq<n)
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int x;

    cout << "enter the number" << endl;
    cin >> x;

    cout << "the square root of the number is " << squareRoot(x) << endl;
    return 0;
}