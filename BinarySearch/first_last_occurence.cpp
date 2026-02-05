#include<iostream>
using namespace std;

int first_occ(int arr[],int size, int k)
{
    int s = 0, e = size-1;
    int ans = -1;

    int mid = s + (e-s)/2;
    while (s <= e)
    {
        if (k == arr[mid])
        {
            ans = mid;
            e = mid-1;
        }

        if (k > arr[mid])
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int last_occ(int arr[],int size, int k)
{
    int s = 0, e = size-1;
    int ans = -1;

    int mid = s + (e-s)/2;
    while (s <= e)
    {
        if (k == arr[mid])
        {
            ans = mid;
            s = mid+1;
        }

        if (k > arr[mid])
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1,2,2,3,5};
    cout << "the first occurence is: " << first_occ(arr, 5, 2) << endl;
    cout << "the last occurence is: " << last_occ(arr, 5, 2) << endl;

    return 0;
}