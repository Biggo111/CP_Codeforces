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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(n==3 && v[1]%2!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        int mx = 0;
        for(int i=1;i<n-1;i++)
        {
            if(mx<v[i])mx=v[i];
        }
        if(mx==1)
        {
            cout<<-1<<endl;
            continue;
        }
        ll ans=0;
        for(int i=1;i<n-1;i++)
        {
            ans+=(v[i]+1)/2;
        }
        cout<<ans<<endl;
    }
}
