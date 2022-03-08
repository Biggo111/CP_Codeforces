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
        int cnt = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='N')cnt++;
        }
        if(cnt==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
