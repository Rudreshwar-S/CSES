#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maX = 2e5,moD = 1e9+7;
int n,q;
ll arr[maX+1];
int main()
{
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i+1];
        arr[i+1]+=arr[i];
    }
    while(q--)
    {
        ll a,b;
        cin>>a>>b,--a;
        cout<<arr[b]-arr[a]<<endl;
    }
}