#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=0;i<a;i++)
#define SORTV(a) sort(a.begin(),a.end())
#define REV(v) reverse(v.begin(),v.end())
#define pb push_back
const int maX = 1e6;
int arr[101],n,x;
ll dp[maX+7];
int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll i=1;i<=x;i++)
    {
        dp[i]=1e9;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<=i)
            {
                dp[i]=min(dp[i], dp[i-arr[j]]+1);
            }
        }
    }
    if(dp[x]>=1e9)
        cout<<"-1"<<endl;
    else
        cout<<dp[x]<<endl;
}