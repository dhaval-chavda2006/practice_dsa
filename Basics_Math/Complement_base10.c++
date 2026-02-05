/*The complement of an integer is the integer you get when you
 flip all the 0's to 1's and all the 1's to 0's in its binary representation.*/


#include<iostream>
using namespace std;

    int main()
    {
        int n, rem =0, m;

        cout << "Enter the number: "<<endl;
        cin >> n;

        m = n;

        if(n ==0)
        return 1;

        while(m != 0){
            rem = (rem <<1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & rem;
        cout << "ans is: " << ans <<endl;

    }