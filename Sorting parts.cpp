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
        vector<ll>v2;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v2.push_back(v[i]);
        }

        sort(v.begin(),v.end());
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=v2[i])
            {
                f = 1;
                break;
            }
        }
        if(f==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
