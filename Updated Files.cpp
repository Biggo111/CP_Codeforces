#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll up = 1;
    ll cnt = 0;
    while(up<k)
    {
        cnt++;
        up*=2;
    }
    if(up>=n)cout<<cnt<<endl;
    else
    {
        ll leftt = n - up;
        if(leftt%k==0)cnt+=leftt/k;
        else cnt+=leftt/k+1;
        cout<<cnt<<endl;
    }
}
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}
