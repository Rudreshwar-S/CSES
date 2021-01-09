#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=0;i<a;i++)
#define SORTV(a) sort(a.begin(),a.end())
#define REV(v) reverse(v.begin(),v.end())
#define pb push_back
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    int app[n],room[m];
    for(int i=0;i<n;i++)
    {
        cin>>app[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>room[i];
    }
    sort(app, app+n);
    sort(room, room+m);
    ll count=0;
    for(int i=0,j=0;i<n;i++)
    {
        while(j<m && app[i]-k>room[j])
        {
            j++;
        }
        if(j<m && app[i]+k>=room[j])
        {
            count++;
            j++;
        }
    }
    cout<<count<<endl;
}