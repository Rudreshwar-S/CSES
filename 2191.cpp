#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maX = 1e6,moD = 1e9+7;
int main()
{
    int n;
    cin>>n;
    ll a,b,prevx,prevy,nowx,nowy;
    ll area=0;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(i==0)
        {
            a=x;
            b=y;
        }
        else
        {
            nowx=x;
            nowy=y;
        }
        if(i==1)
        {
            area += ((a-nowx)*(b+nowy)); 
        }
        else if(i==0)
        {
            area += 0;
        }
        else
        {
            area += ((prevx-nowx)*(prevy+nowy));
        }
        prevx=nowx;
        prevy=nowy;
    }
    area += ((prevx-a)*(prevy+b));
    cout<<abs(area)<<endl;
}