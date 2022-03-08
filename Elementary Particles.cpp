#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll v[n];
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        int flag=0;
        int mx=-1;
        map<int,int>mp;
        for(int i=1; i<=n; i++)
        {
            if(mp[v[i]]==0)mp[v[i]]=i;
            else
            {
                int a=i;
                int b=mp[v[i]];
                int ans = n-(a-b);
                mx=max(mx,ans);
                mp[v[i]]=i;
            }
        }
        cout<<mx<<endl;
    }
}
