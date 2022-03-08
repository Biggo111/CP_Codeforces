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
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>>v;
        vector<ll>v2,v3;
        int a;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v2.push_back(a);
        }
        a=0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v3.push_back(a);
        }
        for(int i=0; i<n; i++)
        {
            v.push_back({v2[i],v3[i]});
        }
        sort(v.begin(),v.end());
        if(k<v[0].first)
        {
            cout<<k<<endl;
        }
        else
        {
            int f = k + v[0].second;
            for(int i=1; i<n; i++)
            {
                if(f>=v[i].first)
                {
                    f+=v[i].second;
                }
            }
            cout<<f<<endl;
        }
    }
}
