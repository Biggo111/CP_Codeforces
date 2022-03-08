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
        vector<ll>v(7);
        for(int i=0;i<7;i++)
        {
            cin>>v[i];
        }
        cout<<v[0]<<" "<<v[1]<<" "<<v[6]-v[0]-v[1]<<endl;
    }
}
