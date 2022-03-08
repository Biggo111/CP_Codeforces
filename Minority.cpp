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
        string s;
        cin>>s;
        int z=0,o=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')z++;
            else o++;
        }
        if(z!=o)
        {
            cout<<min(z,o)<<endl;
        }
        else
        {
            cout<<z-1<<endl;
        }
    }
}
