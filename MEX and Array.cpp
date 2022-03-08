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
        ll n,ans=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                ll b = j-i+1;
                for(int k=i;k<=j;k++)
                {
                    b+=(v[k]==0);
                }
                ans+=b;
            }
        }
        cout<<ans<<endl;
    }
}
