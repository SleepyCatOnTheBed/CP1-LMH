#include <iostream>
#include <vector>
#include <string.h>
#define MAX 30

using namespace std;

void Print(int s[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << s[i];
    }
    cout << endl;
}

void Try(int s[],int n,int i)
{
    for(int j=0;j<=1;j++)
    {
        s[i] = j;
        if(i== n) {
            Print(s,n);
            break;
        }else Try(s,n,i+1);
    }
}

/*
bool IsPrimeNum(int number)
{
    int potentialFactor = 2;
    while(number%potentialFactor != 0) potentialFactor++;
    if(number!=potentialFactor) return false;
    return true;
}
*/

int main()
{
    int s[MAX];
    int n;
    cin >> n;
    Try(s,n,0);
    return 0;
}
