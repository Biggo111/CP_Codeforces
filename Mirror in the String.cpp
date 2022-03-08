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
        if(s[0]=='a')
        {
            cout<<"aa"<<endl;
            continue;
        }
        if(s[0]==s[1])
        {
            cout<<s[0]<<s[1]<<endl;
            continue;
        }
        string ans;
        ans+=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]<=s[i-1])ans+=s[i];
            else break;
        }
        cout<<ans;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
}
