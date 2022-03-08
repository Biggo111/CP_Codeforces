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
        int flag=0;
        int idx=-1;
        for(ll i=s.size()-1;i>0;i--)
        {
            if((s[i]-'0')+(s[i-1]-'0')>=10)
            {
                idx = i;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            int ff = s[0]-'0';
            int gg = s[1]-'0';
            cout<<ff+gg;
            for(int i=2;i<s.size();i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<idx-1;i++)
            {
                cout<<s[i];
            }
            cout<<(s[idx]-'0')+(s[idx-1]-'0');
            for(int i=idx+1;i<s.size();i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
}
