// pivot element in array pivot = rightelement sum == leftelement sum

#include <iostream>
using namespace std;

int pivotIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i]; // sum on right side
        if (leftSum == rightSum) {
            return i; // pivot index found
        }
        leftSum += arr[i];
    }

    return -1; // no pivot index found
}

int main() {
    int arr[6] = {1, 7, 3, 6, 5, 6};
    

    cout << "the pivot index is: "<< pivotIndex(arr,6)<<endl;

    return 0;
}
