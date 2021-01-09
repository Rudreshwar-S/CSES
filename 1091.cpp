#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define arr array
#define SORTV(a) sort(a.begin(),a.end())
#define REV(v) reverse(v.begin(),v.end())
#define pb push_back
int main()
{
    ll n,m;
    cin>>n>>m;
    set <arr<int, 2>> s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.insert({a, i});
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        auto it = s.lower_bound({a+1, 0});
        if(it==s.begin())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            it--;
            cout<<(*it)[0]<<endl;
            s.erase(it);
        }
    }
    
}