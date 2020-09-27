#include <iostream>
#include <vector>
#include <string.h>
#define MAX 30
/*
    Ta quan tâm tới 2 set nhỏ nhất và lớn nhất từ đó => giới hạn trên và giới hạn dưới sẽ lần lười là:
    -Giới hạn trên: n-k+i+1
    -Giới hạn dưới: x[i+1] = x[i] +1
*/
using namespace std;

//Cau hinh khoi tao 1.2.3.4.....k
void SetGenerate(int s[],int k)
{
    for(int i=1; i<=k; i++)
    {
        s[i-1] = i;
    }
}

void Print(int s[],int k)
{
    cout<<"{";
    for(int i=0; i<k; i++)
    {
        if(i==k-1)
        {
            cout << s[i];
        }
        else
        {
            cout << s[i] << ",";
        }
    }
    cout <<"}" << endl;
}

int main()
{
    int s[MAX];
    int n,k;
    cin >> n >> k;
    SetGenerate(s,k);
    int i = k-1;
    while(i>-1) {
        if(s[i] < (n-k+i+1))
        {
            Print(s,k);
            s[i]++;
            for(int j=i;j<k-1;j++)
            {
                s[j+1] = s[j]+1;
            }
            i=k-1;
            continue;
        }
        i--;
    }
    Print(s,k);
    return 0;
}
