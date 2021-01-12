#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maX = 1e6,moD = 1e9+7;
int josephus(int n, int k){
    if(n==1) return 1;
    if(n/2>=k) return 2*k;
    int temp = 2*josephus(n/2+1, k-n/2)-3;
    if(n%2==0) return 2*josephus(n/2, k-n/2)-1;
    else return temp<0 ? temp+n+1 : temp;     
}
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll k,n;
        cin>>k>>n;
        cout<<josephus(k, n)<<endl;
    }
}