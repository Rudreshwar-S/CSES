#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maX = 1e6,moD = 1e9+7;
int main()
{
    string str;
    cin>>str;
    long long count=0,res=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==str[i+1])
            count++;
        else if(str[i]!=str[i+1])
        {
            count++;
        if(count>res)
        {
            res=count;
        }
        count=0;
        }
    }
    cout<<res<<endl;
}