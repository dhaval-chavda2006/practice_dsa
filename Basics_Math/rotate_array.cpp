#include<iostream>
using namespace std;

void RotateArray(int arr[], int n, int k)
{
    int temp[n];

    for(int i =0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];

    }

    for (int i = 0; i < n; i++) 
    { 
        arr[i] = temp[i]; 
    }
}

int main()
{
    int arr[6] = {5,89,4,2,8,56};

    RotateArray(arr,6,2);

    for (int i = 0; i <= 6; i++) 
    { 
        cout << arr[i] << " "; 
    }
    return 0;
}