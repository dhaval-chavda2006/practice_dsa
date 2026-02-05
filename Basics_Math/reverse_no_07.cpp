/*Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
*/

#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int x = 123;   
    int ans = 0;

    while (x != 0) {
        int digit = x % 10;     //in only reversing steps 1

        // Check for overflow/underflow before multiplying by 10
        if (ans > INT_MAX/10 || (ans == INT_MAX/10 && digit > 7)) return 0;
        if (ans < INT_MIN/10 || (ans == INT_MIN/10 && digit < -8)) return 0;

        ans = (ans * 10) + digit;       //2 
        x /= 10;                        //3
    }
    cout << ans << endl;
    return 0;
}