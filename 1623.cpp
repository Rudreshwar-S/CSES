#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=0;i<a;i++)
#define SORTV(a) sort(a.begin(),a.end())
#define REV(v) reverse(v.begin(),v.end())
#define pb push_back
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    ll sum=0,w,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>w;
        arr[i]=w;
        sum+=w;
    }
    for(int i=0;i<1<<n;i++)
    {
        ll temp=0;
        for(int j=0;j<n;j++)
        {
            if(1&(i>>j))
            {
                temp+=arr[j];
            }
        }
        if(temp<=sum/2)
        {
            ans=max(ans, temp);
        }
    }
    cout<<sum-2*ans<<endl;
}