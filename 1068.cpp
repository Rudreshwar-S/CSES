#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maX = 1e6,moD = 1e9+7;
int main()
{
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
            cout<<n<<" ";
        }
        else
        {
            n=n*3+1;
            cout<<n<<" ";
        }
    }
}