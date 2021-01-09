#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=0;i<a;i++)
#define SORTV(a) sort(a.begin(),a.end())
#define REV(v) reverse(v.begin(),v.end())
#define pb push_back
const int maX = 1e6,moD = 1e9+7;
int arr[101],n,x;
ll dp[maX+7];
int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dp[0]=1;
    for(ll i=0;i<n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            if(arr[i]<=j)
            {
                dp[j]=(dp[j]+dp[j-arr[i]])%(moD);
            }
        }
    }
    cout<<dp[x]<<endl;
}