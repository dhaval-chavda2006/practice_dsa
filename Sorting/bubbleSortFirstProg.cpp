

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{   
    for(int i =1; i< size; i++)
    {
        bool swapped = false;
        for(int j = 0; j < size-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
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

    bubbleSort(arr, size);

    cout << "SORTED ARRAY: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


