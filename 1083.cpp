#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maX = 2e5,moD = 1e9+7;
int arr[maX];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n-1);
    int flag=1;
    if(arr[0]==2)
    {
        cout<<"1"<<endl;
        flag=0;
    }
    if(flag)
        for(int i=0;i<n-2;i++)
        {
            if(arr[i]!=arr[i+1]-1)
            {
                cout<<arr[i]+1<<endl;
                flag=0;
                break;
            }
        }
    if(flag)
    {
        cout<<arr[n-2]+1<<endl;
    }
}