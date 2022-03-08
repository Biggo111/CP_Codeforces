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
        vector<ll>even,odd,v1,v2;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even.push_back(v[i]);
                v1.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
                v2.push_back(v[i]);
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1==even && v2==odd)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
