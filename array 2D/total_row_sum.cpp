#include<iostream>
using namespace std;


int sum_rows(int arr[][3],int row, int col)
{
     int sum = 0;

    for(row = 0; row <3; row++)
    {
        for(col=0; col <3; col++)
        {
            sum += arr[row][col];
        }
    }
    return sum;

}

int main()
{
    int arr[3][3];

    cout << "enter values for rows and columns: " <<endl;

    for(int i= 0; i<3; i++)
    {
        for(int j=0;  j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "total sum of rows: " <<sum_rows(arr,3,3);

}