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
        ll n,m;
        cin>>n>>m;
        vector<ll>v;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                int a = abs(1-i)+abs(1-j);
                int b = abs(1-i)+abs(m-j);
                int c = abs(n-i)+abs(1-j);
                int d = abs(n-i)+abs(m-j);
                int f = max(a,max(b,max(c,d)));
                v.push_back(f);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
