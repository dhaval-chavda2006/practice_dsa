#include<iostream>
using namespace std;

int main()
{
    // int i=10;

    // int *ptr = &i;

    // cout << "the address of i = " <<&i<<endl;
    // cout << "the ptr = " <<ptr <<endl;
    // cout << "the *ptr = " <<*ptr<<endl;


    // // using size of function to determine the size
    // cout << "size of integer" << sizeof(i) <<endl;
    // cout << "size of ptr" << sizeof(ptr) <<endl;



    // cout << sizeof(void*) << endl;               useful to observe what compiler is using 16-bit / 32-bit archi.

    
    //if want to inititalize pointer and dont have int i =10xxxxx, do => int *ptr =0;
    
    // int *p = 0;
    // cout <<*p <<endl;


    // copying pointer
    int num = 9;
    int *ptr = &num;

    int *a = ptr;
    cout << "the value of *a = ptr ===> " <<*a<<endl;

    


}