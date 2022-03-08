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
        vector<ll>v,v2;
        int a;
        int mx = 0;
        int mx2 = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v2.push_back(a);
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]>=v2[i])
            {
                int m = v[i];
                v[i] = v2[i];
                v2[i] = m;
            }
        }
        sort(v.rbegin(),v.rend());
        sort(v2.rbegin(),v2.rend());
        cout<<v[0]*v2[0]<<endl;
    }
}
