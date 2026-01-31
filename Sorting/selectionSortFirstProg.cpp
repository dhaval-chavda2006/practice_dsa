// First program of Selection Sort
#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])  // Corrected condition
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
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

    selectionSort(arr, size);

    cout << "SORTED ARRAY: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
