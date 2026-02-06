#include<iostream>
using namespace std;

void func_dpointer(int **ptr1)
{
    *ptr1 = *ptr1 + 1;


}
int main()
{
    int a =15;
    int *ptr = &a;
    int **ptr1 = &ptr;


    cout << *ptr1<<endl;
    func_dpointer(ptr1);
    cout << *ptr1;
    
    // int i =5;
    // int* p = &i;
    // int** p2 = &p;

    // cout <<p<<endl;
    // cout <<p2<<endl;
    // cout <<*p<<endl;
    // cout <<**p2<<endl;

    // cout <<&i <<endl;
    // cout << p <<endl;
    // cout <<*p2 <<endl;




    return 0;
}

