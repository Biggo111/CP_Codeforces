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
        ll l[n],r[n];
        map<pair<ll,ll>,ll>mp;
        for(int i=0; i<n; i++)
        {
            cin>>l[i]>>r[i];
            mp[ {l[i],r[i]}]=1;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=l[i]; j<=r[i]; j++)
            {
                if(l[i]==r[i])
                {
                    cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;
                }
                if(mp[ {l[i],j-1}]==1 && mp[ {j+1,r[i]}]==1)
                {
                    cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;
                }
                if(j==l[i] && mp[ {j+1,r[i]}]==1 || j==r[i] && mp[ {l[i],j-1}]==1)
                {
                    cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;
                }
            }
        }
        cout<<endl;
    }
}
