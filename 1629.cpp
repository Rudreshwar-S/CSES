#include<bits/stdc++.h>
#define arr array
using namespace std;
typedef long long ll;
const int maX = 2e5,moD = 1e9+7;
int n;
arr<int, 2> a[maX];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][1]>>a[i][0];
    }
    sort(a, a+n);
    int temp=0, mov=0;
    for(int i=0;i<n;i++)
    {
        if(a[i][1]>=temp)
        {
            mov++;
            temp = a[i][0];
        }
    }
    cout<<mov<<endl;
}