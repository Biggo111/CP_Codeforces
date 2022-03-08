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
        ll hc,dc,hm,dm,k,w,a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        int flag=0;
        for(int i=0;i<=k;i++)
        {
            ll hc2 = hc+(i*a);
            ll dc2 = dc+((k-i)*w);
            ll x = (hm+dc2-1)/dc2;
            ll y = (hc2+dm-1)/dm;
            if(x<=y)
            {
                flag = 1;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
