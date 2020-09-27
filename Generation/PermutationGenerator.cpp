#include <iostream>
#include <vector>
#include <string.h>
#define MAX 12

using namespace std;

//Cau hinh khoi tao 1.2.3.4.....n
void PermutationGenerate(int s[],int n)
{
    for(int i=1; i<=n; i++)
    {
        s[i-1] = i;
    }
}

void Print(int s[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}

void SortInRange(int s[],int fIndex, int n)
{
    for(int i=fIndex;i<n;i++)
    {
        for(int j=fIndex;j<n-1;j++)
        {
            if(s[j] > s[j+1])
            {
                int temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

int main()
{
    int s[MAX];
    int n;
    cin >> n;
    //SortInRange(s,1,4);
    //Print(s,4);
    PermutationGenerate(s,n);
    int i;
    do {
        Print(s,n);
        i=n-2;
        while(i>-1 && s[i] > s[i+1]) i--;
        if(i>-1) {
            int j = n-1;
            while(s[j] < s[i]) j--;
            swap(s[i],s[j]);
            SortInRange(s,i+1,n);
        }
    }while(i>-1);
    return 0;
}
