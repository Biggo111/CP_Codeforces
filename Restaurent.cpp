#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    ll n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        v.push_back({r,l});
    }
    sort(v.begin(),v.end());
    //for(auto x:v)cout<<x.first<<" "<<x.second<<endl;
    int c=1;
    ll f = v[0].first;
    for(int i=0;i<n;i++)
    {
        if(v[i].second>f)
        {
            c++;
            f = v[i].first;
        }
    }
    cout<<c<<endl;
}
