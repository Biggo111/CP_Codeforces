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
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll>v(3);
        v[0] = a;
        v[1] = b;
        v[2] = c;
        sort(v.rbegin(),v.rend());
        if((a==c && b%2==0) || (a==b && c%2==0) || (b==c && a%2==0))
        {
            cout<<"YES"<<endl;
        }
        else if(v[1]+v[2]==v[0])
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
