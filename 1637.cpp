#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maX = 1e6,moD = 1e9+7;
ll n;
ll dp[maX+5];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        dp[i]=moD;
        ll k=i;
        while(k)
        {
            dp[i]=min(dp[i], dp[i-k%10]+1);
            k/=10;
        }
    }
    cout<<dp[n]<<endl;
}