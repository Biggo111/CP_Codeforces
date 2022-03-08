#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

void solve()
{
    string x1,x2,p1,p2;
    cin>>x1>>p1>>x2>>p2;
    int cnt=0,cnt2=0;
    for(ll i=x1.size()-1;i>=0;i--)
    {
        if(x1[i]=='0')cnt++;
        else break;
    }
    for(ll i=x2.size()-1;i>=0;i--)
    {
        if(x2[i]=='0')cnt2++;
        else break;
    }
    ll k = stoi(p1);
    ll k2 = stoi(p2);
    k+=cnt;
    k2+=cnt2;
    string s="",s2="";
    for(ll i=0;i<x1.size()-cnt;i++)
    {
        s+=x1[i];
    }
    for(ll i=0;i<x2.size()-cnt2;i++)
    {
        s2+=x2[i];
    }
    ll f = stoi(s);
    ll f2 = stoi(s2);
    if(f==f2)
    {
        if(k==k2)cout<<"="<<endl;
        else if(k>k2)cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
    else
    {
        ll z = x1.size() + (k-cnt);
        ll z2 = x2.size() + (k2-cnt2);
        if(z==z2)
        {
            if(x1>x2)cout<<">"<<endl;
            else cout<<"<"<<endl;
        }
        else if(z>z2)cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
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
