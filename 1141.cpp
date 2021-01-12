#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() 
{ 
    int n;
    cin>>n;
    map<int,int>mapp;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int i=1,ans=0;
    for(int j=1;j<=n;j++)
    {
        i=max(i,mapp[arr[j]]+1);
        ans=max(ans,j-i+1);
        mapp[arr[j]]=j;
    }
    cout<<ans<<endl;
}