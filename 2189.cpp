#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maX = 1e6,moD = 1e9+7;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2,x3,y3,k;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        k = (y3-y1)*(x2-x1)-(x3-x1)*(y2-y1);
        if(k>0)
            cout<<"LEFT"<<endl;
        else if(k<0)
            cout<<"RIGHT"<<endl;
        else
            cout<<"TOUCH"<<endl;
    }
}