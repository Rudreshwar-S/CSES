#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define arr array
const int maX = 1e6,moD = 1e9+7;
int n;
arr<int , 2> a[maX]; 
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    sort(a, a+n);
    ll temp=0,res=0;
    for(int i=0;i<n;i++)
    {
        temp+=a[i][0];
        res+=a[i][1]-temp;
    }
    cout<<res<<endl;
}