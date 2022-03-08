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
        ll n,k=0;
        cin>>n;
        if(n<=6)cout<<15<<endl;
        else
        {
            if(n%2!=0)
            {
                n++;
            }
            k = (n*60)/24;
            cout<<k<<endl;
        }
    }
}

