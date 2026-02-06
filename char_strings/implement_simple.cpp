#include<iostream>
using namespace std;

// find length of string 
int getLen(char name[])
{
    int count = 0;

    for(int i =0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[10];

    cout<< "enter your name: ";
    cin >> name;

    cout << getLen(name)<<endl;

}
