#include<iostream>
using namespace std;

int peakElement(int arr[], int size)
{
    int s = 0, e = size -1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        
    if (arr[mid] < arr[mid+1])
    {
        s = mid + 1;
    }
    else 
    {
        e = mid;
    }
    mid = s+(e-s)/2;

    }
    

    return s;
    
}
int main()
{
    int arr[5] = {0,0,1,0,0};
    cout << "the peak element index is: "<<peakElement(arr,3) << endl;
    return 0;
}