//reverse array O(n)

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n, int m)
{
   int s =m+1 ,e = n-1;
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
    int m;

    cout <<"enter the value of n"<<endl;
    cin >>m;

    cout << "enter the size of an array: "<<endl;
    cin>>size;

    int arr[size];
    cout << "enter the elements: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "print array"<<endl;
    reverseArray(arr,size,m);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
    
    
    return 0;
}