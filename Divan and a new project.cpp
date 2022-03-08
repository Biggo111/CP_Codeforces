#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    vector<ll>ans(n);
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v[i].first = a;
        v[i].second = i;
    }
    sort(v.rbegin(),v.rend());
    ll m = n/2;
    ll res = 0;
    ll left_pos = m-1;
    ll right_pos = m+1;
    bool check_left = 1;
    for(int i=0;i<n;i++)
    {
        ll k = v[i].second;
        ll k2 = v[i].first;
        if(check_left)
        {
            ans[k] = left_pos;
            ll cost = 2*(m - left_pos);
            res+=cost*k2;
            left_pos--;
            check_left = 0;
        }
        else
        {
            ans[k] = right_pos;
            ll cost = 2*(right_pos - m);
            res+=cost*k2;
            right_pos++;
            check_left = 1;
        }
    }
    cout<<res<<endl;
    cout<<m<<" ";
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
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
