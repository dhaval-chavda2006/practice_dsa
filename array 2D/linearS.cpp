#include<iostream>
using namespace std;

bool LinearSearch(int arr[][4], int target, int row, int col)
{
    for(row=0; row<3;row++)
    {
        for(col=0; col<4;col++)
        {
            if(arr[row][col] == target)
            {
                return 1;
            }
        }

    }
    return 0;

}

int main()
{
    int arr[3][4];
    int target;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    cout<< "enter value to find: " <<endl;
    cin>>target;

    if(LinearSearch(arr, target, 3,4))
    {
        cout << "element found"<<endl;
    }
    else
    {
        cout << "not found!!" <<endl;
    }
    
    return 0;
}