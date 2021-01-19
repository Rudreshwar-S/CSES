#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maX = 1e6,moD = 1e9+7;
int main()
{
    int n,x;
    cin>>n>>x;
    map<int, int> map;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(map.find(x-a)!=map.end())
        {
            cout<<map[x-a]+1<<" "<<i+1<<endl;
            return 0;
        }
        map[a]=i;
    }
    cout<<"IMPOSSIBLE"<<endl;
}