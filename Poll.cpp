#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    while(n--)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    int m = -1;
    for(auto x:mp)
    {
        m = max(m,x.second);
    }
    set<string>v;
    for(auto x:mp)
    {
        if(x.second==m)
        {
            v.insert(x.first);
        }
    }
    for(auto x:v)
    {
        cout<<x<<endl;
    }
}
