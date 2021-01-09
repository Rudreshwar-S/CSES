#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=0;i<a;i++)
#define SORTV(a) sort(a.begin(),a.end())
#define REV(v) reverse(v.begin(),v.end())
#define pb push_back
int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    ll n = s.size();
    ll counter=1;
    vector<char> vec,v;
    for(ll i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            counter++;
        }
        else
        {
            for(ll j=0;j<counter/2;j++)
            {
                vec.push_back(s[i]);
            }
            if(counter%2!=0)
            {
                v.push_back(s[i]);
                counter=1;
            }
            counter=1;
        }
    }
    ll k = vec.size();
    ll m = v.size();
    if(m>1)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        for(ll i=0;i<k;i++)
        {
            cout<<vec[i];
        }
        if(m==1)
        {
            cout<<v[0];
            for(ll i=k-1;i>=0;i--)
            {
                cout<<vec[i];
            }
        }
        else
        {
            for(ll i=k-1;i>=0;i--)
            {
                cout<<vec[i];
            }
        }
        cout<<endl;
    }
}