#include<iostream>
using namespace std;

void pointer_func(int *p)
{
    // cout<<p<<endl;
    // cout <<*p <<endl;
    // cout << &p <<endl;

    *p = *p+1;
    cout << *p <<endl;
}

int get_sum(int *arr, int n){
    cout <<endl<<"size: " <<sizeof(arr)<<endl;

    int sum =0;
    for(int i =0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}


int main()
{
    int a =5;

    int *p = &a;

    int arr[5] = {1,2,3,4,5};

    // pointer_func(p);

    cout << "the sum is: " << get_sum(arr,5)<<endl;
    return 0;
}