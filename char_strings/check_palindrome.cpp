// palindrome string NOON == NOON

#include<iostream>
using namespace std;

int getLen(char name[])
{
    int count = 0;

    for(int i =0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}



bool isPalindrome(char name[], int n)
{
    int s=0, e = n-1;

    while(s<=e)
    {
        if(name[s] != name[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;


}

int main()
{
    char name[100];

    cout << "Enter your name: "; 
    cin >> name;

    int n = getLen(name);

    cout << isPalindrome(name,n) <<endl; 
    // cout << "Reversed: " << name << endl;

    return 0;
}