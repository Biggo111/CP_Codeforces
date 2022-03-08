#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

void solve()
{
    ll n;
    cin>>n;
    set<ll>st;
    vector<ll>v;
    map<ll,ll>mp;

    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        st.insert(a);
    }
    for(auto x:st)
    {
        v.push_back(x);
        mp[x] = 1;
    }
    //vector<pair<ll,ll>>v2;
    ll ch = n/2;
    bool flag = false;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            ll f = v[i]%v[j];
            ll f2 = v[j]%v[i];
            if(mp[f]==0)
            {
                cout<<v[i]<<" "<<v[j]<<endl;
                //v2.push_back({v[i],v[j]});
                //mp[f] = 1;
                ch--;
                if(ch==0)
                {
                    flag = true;
                    break;
                }
            }
            if(mp[f2]==0)
            {
                cout<<v[j]<<" "<<v[i]<<endl;
                ch--;
                //v2.push_back({v[j],v[i]});
                //mp[f2] = 1;
                if(ch==0)
                {
                    flag = true;
                    break;
                }
            }
        }
        if(flag)break;
    }
//    for(int i=0;i<n/2;i++)
//    {
//        cout<<v2[i].first<<" "<<v2[i].second<<endl;
//    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
