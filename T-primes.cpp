#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

bool isPrime(ll f)
{
    if(f<2)return false;
    if(f<=3)return true;
    if(f%2==0)return false;
    for(ll i=3; i*i<=f; i+=2)
    {
        if(f%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    biggo;
    ll n;
    cin>>n;
    vector<string>v;
    while(n--)
    {
        ll a;
        cin>>a;
        ll f = sqrt(a);
        if((f*f)!=a)
        {
            v.push_back("NO");
        }
        else
        {
            //cout<<f<<endl;
            bool k = isPrime(f);
            if(k==false)
            {
                v.push_back("NO");
            }
            else v.push_back("YES");
        }

    }
    for(auto x:v)
    {
        cout<<x<<endl;
    }
}
