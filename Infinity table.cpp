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
        ll k;
        cin>>k;
        int f = sqrt(k);
        if(k==1)cout<<1<<" "<<1<<endl;
        else if(f*f==k)
        {
            cout<<f<<" "<<1<<endl;
        }
        else
        {
            f++;
            ll x = f*f;
            ll y = x - (f-1);
            ll yy = y - (f-1);
            ll r = f;
            ll c = f;
            if(k>=y)c = x - k + 1;
            else
            {
                r = f - (y-k);
            }
            cout<<r<<" "<<c<<endl;
        }
    }
}
