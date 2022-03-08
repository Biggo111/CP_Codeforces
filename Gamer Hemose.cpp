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
        ll n,h;
        cin>>n>>h;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        ll a = v[0];
        ll b = v[1];
        ll s = a+b;
        ll cnt=0;
        if(h<=a)cnt=1;
        else if(s>=h)cnt=2;
        else
        {
            if(h%s==0)
            {
                cnt = (h/s)*2;
            }
            else
            {
                if(h%s>a)
                {
                    cnt = ((h/s)*2)+2;
                }
                else
                {
                    cnt = ((h/s)*2)+1;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
