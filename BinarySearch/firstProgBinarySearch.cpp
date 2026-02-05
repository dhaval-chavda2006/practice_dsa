#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size -1;

    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if (arr[mid] == key)
        {
            return key;
        }
        if (key > arr[mid])
        {
            s = mid +1;
        }
        else
        {
            e = mid - 1;
        }
        mid  = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,88,99,100};
    int x = binarySearch(arr,10,0);

    cout << "the position of the key value is: "<< x <<endl;
}