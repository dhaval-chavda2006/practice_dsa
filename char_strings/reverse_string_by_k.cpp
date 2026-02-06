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

void ReverseStringByK(char name[], int n, int k)
{
    for(int i=0; i<n; i+=k*2)
    {
        int s =i, e = min(i+k-1, n-1);

    while (s<=e)
    {
        swap(name[s++], name[e--]);
    }

    }

}
int main()
{
    char name[100];

    cout << "Enter your name: "; 
    cin >> name;

    int n = getLen(name);

    ReverseStringByK(name,n,2); 
    cout << "Reversed: " << name << endl;


}