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

void ReverseString(char name[], int n)
{
    int s =0, e=n-1;

    while (s<=e)
    {
        swap(name[s++], name[e--]);
    }
    

}
int main()
{
    char name[10];

    cout << "Enter your name: "; 
    cin >> name;

    int n = getLen(name);

    ReverseString(name, n); 
    cout << "Reversed: " << name << endl;


}