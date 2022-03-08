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
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int v2[n+1][n];
        for(int i=0;i<n;i++)
        {
            v2[0][i]=v[i];
        }
        for(int i=0;i<n;i++)
        {
            map<int,int>mp;
            for(int i=0;i<n;i++)
            {
                mp[v[i]]++;
            }
            for(int j=0;j<n;j++)
            {
                v[j]=mp[v[j]];
                v2[i][j]=v[j];
            }
        }
        ll q;
        cin>>q;
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            a--;
            if(b<=n)
            {
                cout<<v2[b][a]<<endl;
            }
            else cout<<v2[n][a]<<endl;
        }
    }
}
