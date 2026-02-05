#include<iostream>
using namespace std;

bool check(int arr[], int n)
{
    int count = 0;

    for(int i =1; i<n; i++)
    {
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    return count <=1;
}



int main()
{
    int arr[5] = {3,5,7,1,6};

    if (check(arr, 5)) 
    { 
        cout << "Array is sorted and rotated.\n"; 
    } 
    else 
    { 
        cout << "Array is not sorted and rotated.\n"; 
    }
}