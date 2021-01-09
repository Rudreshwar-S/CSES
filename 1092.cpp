#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=0;i<a;i++)
#define SORTV(a) sort(a.begin(),a.end())
#define REV(v) reverse(v.begin(),v.end())
#define pb push_back
int main()
{
    ll n;
    cin>>n;
    if(n%4!=0 && (n+1)%4!=0)
    {
        cout<<"NO"<<endl;
    } 
    else if(n==3)
    {
        cout<<"YES"<<endl;
        cout<<"2"<<endl;
        cout<<"1 2"<<endl;
        cout<<"1"<<endl;
        cout<<"3"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        if(n%2!=0)
        {
            ll count=4;
            ll z = n/2+1;
            cout<<z<<endl;
            cout<<"1 2 ";
            for(ll i=2;i<z;i++)
            {
                cout<<count<<" ";
                if(i%2==0)
                {
                    count+=3;
                }
                else
                {
                    count++;
                }
            }
            cout<<endl;
            ll x = n/2;
            cout<<x<<endl;
            cout<<"3 ";
            ll counter=5;
            for(ll i=1;i<x;i++)
            {
                cout<<counter<<" ";
                if(i%2==0)
                {
                    counter+=3;
                }
                else
                {
                    counter++;
                }
            }
        }
        else if(n%2==0)
        {
            ll count=4;
            ll z = n/2;
            cout<<z<<endl;
            cout<<"1 ";
            for(ll i=1;i<z;i++)
            {
                cout<<count<<" ";
                if(i%2==0)
                {
                    count+=3;
                }
                else
                {
                    count++;
                }
            }
            cout<<endl;
            ll x = n/2;
            cout<<x<<endl;
            cout<<"2 ";
            ll counter=3;
            for(ll i=1;i<x;i++)
            {
                cout<<counter<<" ";
                if(i%2==0)
                {
                    counter++;
                }
                else
                {
                    counter+=3;
                }
            }
        }
    }
}