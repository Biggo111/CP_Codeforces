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
        vector<pair<int,int>>v({6,15},{8,20},{10,25});
        if(n<=6)
        {
            cout<<15<<endl;
        }
        else if(n>6 && n<=8)
        {
            cout<<20<<endl;
        }
        else if(n>8 && n<=10)
        {
            cout<<25<<endl;
        }
        else if(n>10 && n<=16)
        {
            cout<<40<<endl;
        }
        else if(n>16 && n<=18)
        {
            cout<<45<<endl;
        }
        else if(n>18 && n<=20)
        {
            cout<<50<<endl;
        }
        else if(n>20 && n<=24)
        {
            cout<<60<<endl;
        }
        else if(s)
    }
}
