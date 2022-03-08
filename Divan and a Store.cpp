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
        ll n,l,m,k;
        cin>>n>>l>>m>>k;
        ll v[n];
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v,v+n);
        ll sum=0,cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(v[i]>=l && v[i]<=m && sum+v[i]<=k)
            {
                cnt++;
                sum+=v[i];
            }
        }
        cout<<cnt<<endl;
    }
}
