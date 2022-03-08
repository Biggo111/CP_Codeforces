#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
set<ll>st;
int main()
{
    for(ll i=1; i*i<=1000000000; i++)
    {
        st.insert(i*i);
    }
    for(ll i=1;i*i<=1000000000;i++)
    {
        st.insert(i*i*i);
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int cnt=0;
        for(auto x:st)
        {
            if(n>=x)cnt++;
            else break;
        }
        cout<<cnt<<endl;
    }
}
