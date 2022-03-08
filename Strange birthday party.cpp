#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n);
        vector<ll>v2(m);
        v[0]=0;
        v2[0]=0;
        for(ll i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        for(ll i=1;i<=m;i++)
        {
            cin>>v2[i];
        }
        int total = 0;
        vector<ll>v3;
        for(ll i=1;i<m;i++)
        {
            for(ll j=1;j<=v[i];j++)
            {
                if(v[i]==j)
                {
                    v3.push_back(v2[j]);
                }
                j++;
                total+=v2[j];

            }
        }
        int k = n-m+1;
        total+=(2*v3[0]);
        cout<<total<<endl;
    }
}
