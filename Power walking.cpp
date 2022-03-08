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
        set<ll>s;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        ll ans = s.size();
        for(int i=0;i<n;i++)
        {
            if(i<ans)
            {
                cout<<ans<<" ";
            }
            else
            {
                ans++;
                cout<<ans<<" ";
            }
        }
        cout<<endl;
    }
}
