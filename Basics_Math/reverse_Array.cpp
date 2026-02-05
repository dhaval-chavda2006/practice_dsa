//reverse array O(n)

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n)
{
   int s = 0, e = n-1;
   while (s<=e)
   {
       swap(arr[s],arr[e]);
       s++;
       e--;
   }
}

int main()
{
    int size;

    cout << "enter the size of an array: "<<endl;
    cin>>size;

    int arr[size];
    cout << "enter the elements: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "print array"<<endl;
    reverseArray(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
    
    
    return 0;
}