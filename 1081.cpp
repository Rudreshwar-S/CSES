#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maX = 1e6,moD = 1e9+7;
int arr[maX+1];
int main()
{
    int n;
    cin>>n; 
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        ++arr[a];
    }
    for(int i=maX;i;--i)
    {
        int temp = 0;
        for(int j=i;j<=maX;j+=i)
        {
                temp+=arr[j];
        }
        if(temp>1)
        {
            cout<<i<<endl;
            break;
        }
    }
}