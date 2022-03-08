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
        ll p,m;
        cin>>p>>m;
        ll total = p+m;
        ll team = total/4;
        if(total<4)cout<<0<<endl;
        else
        {
            ll mn = min(p,m);
            if(team>mn)
            {
                cout<<mn<<endl;
            }
            else
            {
                cout<<team<<endl;
            }
        }
    }
}
