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
        vector<string>v(n-2);
        for(auto &x:v)cin>>x;
        string s = v[0];
        int k = 0;
        for(int i=1;i<v.size();i++)
        {
            if(s.back()!=v[i].front())
            {
                s+=v[i];
                k=1;
            }
            else
            {
                s+=v[i].back();
            }
        }
        if(k==0)s+='b';
        cout<<s<<endl;
    }
}
