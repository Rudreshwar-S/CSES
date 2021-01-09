#include<bits/stdc++.h>
using namespace std;
#define arr array
typedef long long ll;
const int maX = 1e6,moD = 1e9+7;
int main()
{
    ll n;
    cin>>n;
    set<arr<int, 2>> s;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        s.insert({2*a, 1});
        s.insert({2*b+1, -1});
    }
    int res=0, temp=0;
    for(arr<int, 2> x : s)
    {
        temp+=x[1];
        res = max(res, temp);
    }
    cout<<res<<endl;
}