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
        //vector<ll>v(n);
        int v[n];
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int i;
        int cnts=1,ans=0;
        int k = v[n-1];
        for(i=n-2; i>=0; i--)
        {
            if(v[i]==v[i+1])cnts++;
            else break;
        }
        while(i>=0)
        {
            ans++;
            i-=cnts;
            cnts*=2;
            while(i>=0 && v[i]==k)i--,cnts++;
        }
        cout<<ans<<endl;
    }
}
