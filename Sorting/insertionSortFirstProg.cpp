#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i =1; i <n; i++)
    {
        int temp = arr[i];
        int j = i-1;

        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            arr[j+1] = arr[j];

            else
            break;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int size;

    cout << "ENTER THE SIZE OF ARRAY: ";
    cin >> size;

    int arr[size];

    cout << "ENTER THE ELEMENTS OF ARRAY: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, size);

    cout << "SORTED ARRAY: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
