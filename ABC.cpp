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
        string s;
        cin>>s;
        if(n>=3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(n==1)cout<<"YES"<<endl;
            else if(n==2 && s[0]==s[n-1])
            {
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
    }
}
